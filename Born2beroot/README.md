# Born2beroot
42_Courses : Born2beroot (125%)
# STEP 1 configure debian

start with new VM:
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.23.54 PM-1.png>)

name should be : "Born2beroot"
and for my example i choose Oracle (64bit) for linux version
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.27.28 PM.png>) 

1GB RAM is enough for this VM
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.28.08 PM.png>) 

here create a virtual hard disk
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.28.58 PM.png>) 

VDI cuz we have ISO file
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.29.15 PM.png>) 

here we have to choose memory for allocate
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.29.33 PM.png>) 

i put 30.8 cuz im doin bonus, and click "Create"
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.30.03 PM.png>) 

go to "settings"
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.30.32 PM.png>) 

"Storage" below Controller: IDE is "Empty"
and in Optical Drive: choose a duisk file.
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.31.32 PM.png>) 

search ISO file for your VM and click "Open"
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.32.23 PM.png>) 

start your VM
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.32.48 PM.png>) 


# STEP 2 install Debian

go to "install" and follow the pictures
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.36.27 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 1.37.44 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 1.38.17 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 1.38.30 PM.png>) 

Hostname should be your intra name + 42 for example "btvildia42"
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.39.32 PM.png>) 

there is no specific reason to put Domain name, so i just left it empty
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.39.47 PM.png>) 

for your root password , you must to follow the "strong password policy"
and create strong password
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.42.16 PM.png>) 

i choose to put intra name here
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.42.45 PM.png>) 

and same here :)
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.43.42 PM.png>) 

for the password for my user i choose same as my root password
cuz i have small creativity :)
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.44.58 PM.png>)

go to manual for setting partitions in manual way,
its partition structure for bonus
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.47.58 PM.png>) 

choose our VBOX HARDDISK
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.48.33 PM.png>) 

Create new epmty partition table
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.48.46 PM.png>) 

choose our FREE SPACE
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.49.32 PM.png>) 

# STEP 3 SET UP PARTITIONS
and create a first new partition
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.49.43 PM.png>) 

as we have in subject for example it should be:
500m Primary partition for Boot
so follow the steps 
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.57.49 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 1.58.03 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 1.58.15 PM.png>) 

Mout point should be Boot
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.59.13 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 1.59.27 PM.png>) 

click done setting up the partition and with that we create our first partition :)
![Alt text](<Photos/Screen Shot 2024-01-15 at 1.59.45 PM.png>) 

now click your FREE SPACE and create other Logical partition
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.00.33 PM.png>)

follow steps
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.01.03 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.01.39 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.02.53 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.03.20 PM.png>) 

here choose "Do Not Mount it"
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.03.44 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.04.17 PM.png>) 

now we configure encrypted volumes on this partition
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.04.29 PM.png>) 


![Alt text](<Photos/Screen Shot 2024-01-15 at 2.04.44 PM.png>)


![Alt text](<Photos/Screen Shot 2024-01-15 at 2.05.02 PM.png>)

for use "arrows" for moves, for checking click "space" check sda5 and press "Enter"
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.05.19 PM.png>) 

click done setting up partition here
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.06.28 PM.png>) 

here finish
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.06.50 PM.png>) 

and here choose yes
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.07.02 PM.png>) 

you can skip this and press cancel
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.07.38 PM.png>) 

for the reason of zero creativity i put same password here :)
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.08.27 PM.png>) 

now we gonna start to configure LVM Groop (Logical Volume Manager)
wich should be like this (from subject)
![Alt text](<Photos/Screen Shot 2024-01-17 at 1.09.35 PM.png>)

so follow steps carefully 
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.09.38 PM.png>)

YES
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.10.01 PM.png>) 

and here we make groups
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.10.35 PM.png>) 

name it LVMGroup
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.11.05 PM.png>) 

continue..
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.11.59 PM.png>) 

# STEP 4 MAKE LOGICAL VOLUMES
and here we starting to make uor logical volumes, first one is "root" so start from that.
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.12.12 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.12.48 PM.png>) 

name will be "root" and follow the steps
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.13.11 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.13.45 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.14.42 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.14.54 PM.png>) 

next one is "swap"
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.15.36 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.15.54 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.17.48 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.18.02 PM.png>) 

next is "home"
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.18.32 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.18.51 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.19.07 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.19.19 PM.png>) 

next is "var"
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.19.42 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.19.58 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.20.11 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.20.25 PM.png>) 

next is "srv"
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.21.41 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.21.57 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.22.07 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.22.15 PM.png>) 

next is "tmp"
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.22.56 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.23.07 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.25.07 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.25.15 PM.png>) 

and last is "var-log"
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.26.17 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.26.31 PM.png>) 

go to finish and now we starting to give partitions settings
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.26.45 PM.png>) 

# STEP 5 SET UP SETTINGS FOR PARTITIONS
so our first one to set up is "home" so go to #1  5.0 GB
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.30.31 PM.png>) 

go to use as:
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.31.55 PM.png>) 

and choose Ex4
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.32.12 PM.png>) 

go to mount point:
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.32.34 PM.png>) 

and choose "/home"
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.33.25 PM.png>) 

go to "done setting up the partition" and now our first home partition is finished
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.33.38 PM.png>) 

now lets set up settings for all partitions, so follow steps carefully :)
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.35.06 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.35.27 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.35.37 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.35.48 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.36.09 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.36.20 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.37.00 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.37.41 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.37.55 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.38.13 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.38.27 PM.png>) 


HERE CHOOSE "SWAP AREA" !!!


![Alt text](<Photos/Screen Shot 2024-01-15 at 2.38.36 PM.png>) 

and "done setting up the partition"
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.38.51 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.39.03 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.39.25 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.39.53 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.40.16 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.40.26 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.41.05 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.41.26 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.41.46 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.42.09 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.42.31 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.42.57 PM.png>) 



HERE CHOOSE "ENTER MANUALLY" !!!

 
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.43.12 PM.png>) 

type "/var/log
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.44.22 PM.png>) 

and "Done setting up the partition"
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.44.37 PM.png>) 

scroll down and choose Finish
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.45.05 PM.png>) 

and ofc "Yes" to write our changes to disk
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.45.15 PM.png>) 

here choose "No" and follow steps
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.59.20 PM.png>) 

![Alt text](<Photos/Screen Shot 2024-01-15 at 2.59.37 PM.png>) 

here choose "deb.debian.org"
![Alt text](<Photos/Screen Shot 2024-01-15 at 2.59.46 PM.png>) 

this place you can left empty
![Alt text](<Photos/Screen Shot 2024-01-15 at 3.00.00 PM.png>) 

and choose "No" here
![Alt text](<Photos/Screen Shot 2024-01-15 at 3.04.43 PM.png>) 

here if there is any checked software just unmark it and continue..
![Alt text](<Photos/Screen Shot 2024-01-15 at 3.06.18 PM.png>) 

here click yes to install "GRUB boot loader" 
![Alt text](<Photos/Screen Shot 2024-01-15 at 3.08.12 PM.png>) 

choose your VBOX HARDDISK
![Alt text](<Photos/Screen Shot 2024-01-15 at 3.08.27 PM.png>) 

and reboot out machine to finish installation 
![Alt text](<Photos/Screen Shot 2024-01-15 at 3.16.56 PM.png>) 

# STEP 6 SET UP OUR VIRTUALMACHINE

here you have to type password to unlock your disk
![Alt text](<Photos/Screen Shot 2024-01-15 at 3.18.20 PM.png>) 

and after that you should type your intra as user, and your password for user
![Alt text](<Photos/Screen Shot 2024-01-15 at 3.19.45 PM.png>) 

when you are in type 'su' for going to 'root' to have all permissions for your VM, and after that type
```
apt install sudo
```
for installing sudo on your VM
![Alt text](<Photos/Screen Shot 2024-01-15 at 4.04.08 PM.png>) 

after it finishes type 

```
sudo reboot
```
for apply changes
![Alt text](<Photos/Screen Shot 2024-01-15 at 4.05.59 PM.png>) 

after reboot you have to type password again, go to your user , and type 'su' for going on your root, and you have to do that each times you open your VM

after that you have to make user wich one have your intraname as name,
```
sudo adduser btvildia
```
but probably you already have this user, so next you have to make group named 'user42'
```
sudo addgroup user42
```
and you have to add your 'btvildia' user to group named 'user42'
```
sudo adduser btvildia user42
```
![Alt text](<Photos/Screen Shot 2024-01-15 at 4.19.27 PM.png>) 

next we have to install 'openssh-server' and 'vim'
so for start 
```
sudo apt update
```
for update system
```
sudo apt install openssh-server
```
for install 'openssh-server'

```
sudo apt install vim
```
for install vim (text editor)
![Alt text](<Photos/Screen Shot 2024-01-15 at 4.24.25 PM.png>) 

next we have to find directory where we have 'etc'
and type 
```
vim etc/ssh/ssh_config
```
for editing some standart ssh configuration files
![Alt text](<Photos/Screen Shot 2024-01-15 at 4.36.25 PM.png>) 

so here we have to uncomment 'port' and replace number with 4242,

so for savin this file you have to press 'esc' after finish editing, next type ':' with your keyboard, afther that type 'wq' and press 'enter'
![Alt text](<Photos/Screen Shot 2024-01-15 at 4.43.13 PM.png>) 

nex we have to edit other file also, so type this
```
vim etc/ssh/sshd_config
```
and remember this are different files we edit "ssh_config" and "sshd_confid"
![Alt text](<Photos/Screen Shot 2024-01-15 at 4.50.52 PM.png>) 

here you also have to uncomment and change port to 4242, and uncomment PermitRootLogin, for saving use similar method as previous
![Alt text](<Photos/Screen Shot 2024-01-15 at 4.58.50 PM.png>) 

now for checking your ssh status type
```
sudo service ssh status
```
it should be "active (running)" and port should be set on 4242
![Alt text](<Photos/Screen Shot 2024-01-15 at 5.03.39 PM.png>)

now we have to install and make active UFW(Uncomplicated firewall) so we have to run this commands
```
sudo apt install ufw
```
for installing UFW
```
sudo ufw enable
```
for enable your firewall
```
sudo ufw allow 4242
```
to allow UFW on 4242 port
![Alt text](<Photos/Screen Shot 2024-01-15 at 5.08.16 PM.png>) 

and 
```
sudo ufw status
```
for check if your ufw is active on your ports
![Alt text](<Photos/Screen Shot 2024-01-15 at 5.09.34 PM.png>) 

and we also have to instal per_package modules for password from here
```
sudo apt install libpam-pwquality
```
![Alt text](<Photos/Screen Shot 2024-01-15 at 5.32.00 PM.png>) 

nex we have to configure sudo policies
```
mkdir /var/log/sudo
```
for create directory
```
touch /etc/sudoers.d/sudo_config
```
for create configuration file
```
vim /etc/sudoers.d/sudo_config
```
and this for edit our config file
![Alt text](<Photos/Screen Shot 2024-01-15 at 5.16.15 PM.png>) 

for how many password try we have.

for mesaage when password fails.

for show where the log file has to be saved in.

for "The TTY mode has to be enabled for security reasons".

for the paths that can be used by sudo must be restricted.

![Alt text](<Photos/Screen Shot 2024-01-15 at 5.24.20 PM.png>) 

for setup passsword policy you have to edit this file
![Alt text](<Photos/Screen Shot 2024-01-15 at 5.25.36 PM.png>) 

and change this numbers as in picture
![Alt text](<Photos/Screen Shot 2024-01-15 at 5.26.46 PM.png>) 

for edit you have to open this file :
```
vim /etc/pam.d/common-password
```
and add this commands after "pam_pwquality.so" 
```
minlen=10 ucredit=-1 lcredit=-1 dcredit=-1 maxrepeat=3 reject_username difok=7 enforce_for_root
```
for minimun characters password should have.

for password should have capital letter.

for password should have lowercase letter.

for password should have digit.

for password should not have 3 same character.

for password should not have username inside.

for password can not have the same character repited three contiusly times.

for password should have 7 different character from last password.

for implement this policy to root.

![Alt text](<Photos/Screen Shot 2024-01-15 at 5.38.38 PM.png>) 

next:
```
sudo apt update
```
for update system and 
```
sudo shutdown now
```
for shutdown :)
![Alt text](<Photos/Screen Shot 2024-01-15 at 5.40.19 PM.png>) 

# STEP 7 SET UP SSH CONNTECTION

now we have to add port 4242 to out VM

so follow steps:

open settings,

go to Network,

go to Advanced,

and Port Forwarding.

# add port
![Alt text](<Photos/Screen Shot 2024-01-15 at 5.41.55 PM.png>) 

click "+" icon on top right corner

and type 4242 in "Host Port" and "Guest Port"
![Alt text](<Photos/Screen Shot 2024-01-15 at 5.43.15 PM.png>) 

next when you start your VM you can connect via ssh from your shell.

so start your VM:
![Alt text](<Photos/Screen Shot 2024-01-15 at 5.46.29 PM.png>) 

and open shell
![Alt text](<Photos/Screen Shot 2024-01-15 at 5.49.58 PM.png>) 

when shell is open type:
```
ssh yourintra@localhost -p 4242
```
to connect.
and next type "Yes"
![Alt text](<Photos/Screen Shot 2024-01-15 at 6.20.33 PM.png>) 

# STEP 8 SET UP MONITORING

now we can continue using VM from our shell, 

so type:
```
su
```
for go to sudoers.
![Alt text](<Photos/Screen Shot 2024-01-15 at 6.23.23 PM.png>) 

we have to make file named "Monitoring.sh" (from subject)

and edit this file to show us all the info they are asking in subject.

so create file:
```
touch monitoring.sh
```
and start editing:
```
vim monitoring.sh
```
![Alt text](<Photos/Screen Shot 2024-01-15 at 6.26.26 PM.png>) 

so here is all commands for all the info what we want our monitoring to show us.

```
info=$(uname -a)

cpu=$(grep "physical id" /proc/cpuinfo | wc -l)

cpuv=$(grep "processor" /proc/cpuinfo | wc -l)

ruse=$(free --mega | awk '$1 == "Mem:" {print $3}')

rtotal=$(free --mega | awk '$1 == "Mem:" {print $2}')

rprct=$(free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')

duse=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} END {print disk_u}')

dtotal=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_t += $2} END {printf ("%.1fGb\n"), disk_t/1024}')

dprct=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} {disk_t+= $2} END {printf("%d"), disk_u/disk_t*100}')

cpul=$(vmstat 1 2 | tail -1 | awk '{printf $15}')
cpuop=$(expr 100 - $cpul)
cpuprc=$(printf "%.1f" $cpu_op)

lboot=$(who -b | awk '$1 == "system" {print $3 " " $4}')

LVM=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)

TCP=$(ss -ta | grep ESTAB | wc -l)

ulog=$(users | wc -w)

ip=$(hostname -I)
mac=$(ip link | grep "link/ether" | awk '{print $2}')

SUDO=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

wall "	Architecture: $info
	CPU physical: $cpu
	vCPU: $cpuv
	Memory Usage: $ruse/${rtotal}MB ($rprct%)
	Disk Usage: $duse/${dtotal} ($dprct%)
	CPU load: $cpuprc%
	Last boot: $lboot
	LVM use: $LVM
	Connections TCP: $TCP ESTABLISHED
	User log: $ulog
	Network: IP $ip ($mac)
	Sudo: $SUDO cmd"
```
and here are explenations of use each commands:
![Alt text](<Photos/Screen Shot 2024-01-15 at 6.32.48 PM.png>) 

so after saving your monitoring, when you run:
```
sh monitoring.sh
```
it should show you information of system like that:
![Alt text](<Photos/Screen Shot 2024-01-15 at 7.00.29 PM.png>) 

no we have to make our monitoring to run in every 10 min.

so we have to edit "crontab"
```
sudo crontab -u root -e
```
![Alt text](<Photos/Screen Shot 2024-01-15 at 7.01.35 PM.png>) 

and add this script at the end
```
*/10 * * * * sh /ruta del script
```
![Alt text](<Photos/Screen Shot 2024-01-15 at 7.13.59 PM.png>) 
#  ↑ ↑ with finishing that we already get (110)
so our VM and firsr part of bonus is already done.

# STEP 9 SET UP WORDPRESS AND WORDPRESS WEBSITE
but if you want to do second part also follow next steps:

first we have to install : "lighttpd"
```
sudo apt install lighttpd
```
![Alt text](<Photos/Screen Shot 2024-01-16 at 12.41.01 PM.png>) 

and allow anoter port to '80'
```
sudo ufw allow 80
```
and 
```
sudo ufw status
```
for check if your ufw is active on your ports
![Alt text](<Photos/Screen Shot 2024-01-16 at 12.47.34 PM.png>) 
# and dont forget to add new port '80' on your VM:
as we did here [(HERE)](https://github.com/BEQSONA-cmd/Born2beroot?tab=readme-ov-file#add-port)


now we install "wget" and "zip" for installing Wordpress
```
sudo apt install wget zip
```
![Alt text](<Photos/Screen Shot 2024-01-16 at 12.49.27 PM.png>) 

next we have to go correct directory
```
cd /var/www/
```
and get lastes version of wordpres with this:
```
sudo wget https://wordpress.org/latest.zip
```
![Alt text](<Photos/Screen Shot 2024-01-16 at 12.54.35 PM.png>) 

fitst we have to unzip it:
```
sudo unzip latest-en_US.zip
```
next we have to change name of our old html directory to use new one:
```
sudo mv html html1
```
and make our wordpress to standart html directory:
```
sudo mv wordpress html
```
![Alt text](<Photos/Screen Shot 2024-01-16 at 1.00.39 PM.png>) 

now we have to type this to give out html directory some permissions
```
sudo chmod -R 755 html
```
and for installing mariadb packages type this:
```
sudo apt install mariadb-server
```
and isnstall mysql:
```
sudo mysql_secure_installation
```
![Alt text](<Photos/Screen Shot 2024-01-16 at 1.03.53 PM.png>) 


Switch to unix_socket autentication?  [N]

![Alt text](<Photos/Screen Shot 2024-01-16 at 1.08.59 PM.png>) 


Change the root password?  [N]

![Alt text](<Photos/Screen Shot 2024-01-16 at 1.09.11 PM.png>) 


Remove anonymous users?  [Y]

![Alt text](<Photos/Screen Shot 2024-01-16 at 1.09.22 PM.png>) 


Disallow root login remotely?  [Y]

![Alt text](<Photos/Screen Shot 2024-01-16 at 1.09.33 PM.png>) 


Remove test database and acces to it?  [Y]

![Alt text](<Photos/Screen Shot 2024-01-16 at 1.09.45 PM.png>) 


Reaload privilege tables now?  [Y]

![Alt text](<Photos/Screen Shot 2024-01-16 at 1.09.55 PM.png>) 

now everything is installed and lets run mariadb for make our database and user for this database
```
mariadb
```
![Alt text](<Photos/Screen Shot 2024-01-16 at 1.15.23 PM.png>) 

for create database type "CREATE DATABASE" and name of database:
```
CREATE DATABASE wp_database;
```
for create user in that database type:
```
CREATE USER 'btvildia'@'localhost' IDENTIFIED BY '12345';
```
and for giving that user new user necessary permissions:
```
GRANT ALL PRIVILEGES ON wp_database.* TO 'btvildia'@'localhost';
```
typing this we will se all the databases and if our database is also there it means everything is correct:
```
SHOW DATABASES;
```
![Alt text](<Photos/Screen Shot 2024-01-16 at 1.19.22 PM.png>) 

next type:
```
FLUSH PRIVILEGES;
```
for update permissions wich we change.

and for exit type 
```
exit
```
![Alt text](<Photos/Screen Shot 2024-01-16 at 1.21.33 PM.png>) 

now you have to install packages for PHP to connect to  a mysql database:
```
sudo apt install php-cgi php-mysql
```
![Alt text](<Photos/Screen Shot 2024-01-16 at 1.24.17 PM.png>) 

next we have to configure our php configuration file

so first we have to go in html directory:
```
cd && cd .. && cd /var/www/html
```
nex we gonna copy wp-config-sample.php , to have backup also :)
```
cp wp-config-sample.php wp-config.php
```
and next we gonna open in vim our PHP file 
```
vim wp-config.php
```
![Alt text](<Photos/Screen Shot 2024-01-16 at 1.32.11 PM.png>) 

next you have to change this three places with initials you give during creating databases:

you can do similar as here, but with your intra and password:
![Alt text](<Photos/Screen Shot 2024-01-16 at 1.33.40 PM.png>) 

for good perfomance in apps on server type this:
```
sudo lighty-enable-mod fastcgi
```
for good perfomance in apps(based on php) on server type this:
```
sudo lighty-enable-mod fastcgi-php
```
for apply changes:
```
sudo service lighttpd force-reload
```
![Alt text](<Photos/Screen Shot 2024-01-16 at 1.36.08 PM.png>) 

next open your browser and type:
```
localhost
```
and fill page the same way as in picture (but, based on your intra and initials, NOT EXACTLY same you idiot !)

and click "Install Wordpress"
![Alt text](<Photos/Screen Shot 2024-01-16 at 1.38.39 PM.png>) 

next you just have to log in:
![Alt text](<Photos/Screen Shot 2024-01-16 at 1.39.25 PM.png>) 

and put your username and password witch you did during installation website:
![Alt text](<Photos/Screen Shot 2024-01-16 at 1.40.09 PM.png>) 
#  ↑ ↑ with finishing that we already get (120)

# STEP 10: CONGRATULATIONS YOU WERE DECEIVED 
In this project, I will not show you how to install aditional service for WordPress
So you have to deal this problem only with yourself.

Oh, by the way, I have some good suggestions of aditional servics :

1. FTP:

2. Fail2ban:

3. OpenLiteSpeed:
