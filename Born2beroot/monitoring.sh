#!/bin/bash

info=$( uname -a)

cpu=$(grep "physical id" /proc/cpuinfo | wc -l)

cpuv=$(grep "processor" /proc/cpuinfo | wc -l)

ruse=$(free --mega | awk '$1 == "Mem:" {print $3}')

rtotal=$(free --mega | awk '$1 == "Mem:" {print $2}')

rprct=$(free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')

duse=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} END {print disk_u}')

dtotal=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_t += $2} END {printf("%.1fGb\n"), disk_t/2048}')

dprct=$(df -m | grep "/dev/" | grep -v "/boot" |awk '{disk_u += $3} {disk_t += $2} END {printf("%d"), disk_u/disk_t*100}')

cpul=$(vmstat 1 2 | tail -1 | awk '{printf $15}')
cpuop=$(expr 100 - $cpul)
cpuprc=$(printf "%.1f" $cpuop)

lboot=$(who -b | awk '$1 == "system" {print $3 " " $4}')

LVM=$(if [ $(lsblk | grep lvm | wc -l) -gt 0 ];then echo yes; else echo no; fi)

TCP=$(ss -ta | grep ESTAB | wc -l)

ulog=$(users | wc -w)

ip=$(hostname -I)
mac=$(ip link | grep "link/ether" | awk '{print $2}')

SUDO=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

wall "  #Architecture: $info
        #CPU Physical: $cpu
        #vCPU: $cpuv
        #Memory Usage: $ruse/${rtotal}MB ($rprct%)
        #Disk Usage: $duse/${dtotal} ($dprct%)
        #CPU load: $cpuprc%
        #Last Boot: $lboot
        #LVM Use: $LVM
        #Connection TCP: $TCP ESTABLISHED
        #User Log: $ulog
        #Network: IP $ip ($mac)
        #Sudo: $SUDO cmd"
