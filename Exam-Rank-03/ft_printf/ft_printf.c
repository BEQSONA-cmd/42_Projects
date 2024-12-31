#include <unistd.h>
#include <stdarg.h>

int ft_char(char c, int j)
{
    j++;
    write(1, &c, 1);
    return(j);
}

int ft_str(char *s, int j)
{
    int i = 0;
    if(!s)
        j = ft_str("(null)", j);
    else
    {
        while(s[i])
        {
            j = ft_char(s[i], j);
            i++;
        }
    }
    return(j);
}

int ft_num(int n, int j)
{
    if(n == -2147483648)
    {
        j = ft_char('-', j);
        j = ft_char('2', j);
        j = ft_num(147483648, j);
    }
    else if(n < 0)
    {
        j = ft_char('-', j);
        n = -n;
        j = ft_num(n, j);
    }
    else if(n >= 10)
    {
        j = ft_num(n / 10, j);
        j = ft_num(n % 10, j);
    }
    else
        j = ft_char((n % 10) + '0', j);
    return(j);
}

int ft_hex(size_t n, int j)
{
    unsigned int i = (unsigned int)n;
    if(i == 0)
        j = ft_char('0', j);
    else if(i >= 16)
    {
        j = ft_hex(i / 16, j);
        j = ft_hex(i % 16, j);
    }
    else if(i < 10)
        j = ft_char(i + '0', j);
    else
        j = ft_char((i - 10) + 'a', j);
    return(j);
}

int ft_printf(char *a, ...)
{
    int i = 0;
    int j = 0;
    va_list arg;
    va_start(arg, a);
    while(a[i])
    {
        if(a[i] == '%')
        {
            i++;
            if(a[i] == 's')
                j = ft_str(va_arg(arg, char *), j);
            if(a[i] == 'd')
                j = ft_num(va_arg(arg, int), j);
            if(a[i] == 'x')
                j = ft_hex(va_arg(arg, int), j);
            if(a[i] == '%')
                j = ft_char('%', j);
        }
        else
        {
            write(1, &a[i], 1);
            j++;
        }
        i++;
    }
    va_end(arg);
    return(j);
}
