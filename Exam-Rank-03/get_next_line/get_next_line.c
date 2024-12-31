#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int i = 0;
	if(!s)
		return(0);
	while(s[i])
		i++;
	return(i);
}

void ft_strcpy(char *d, char *s)
{
	int i = 0;
	if(!s)
		return;
	while(s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
}

char *ft_strchr(char *s, int c)
{
	int i = 0;
	if(!s)
		return(NULL);
	while(s[i])
	{
		if(s[i] == c)
			return((char *)s + i);
		i++;
	}
	return(NULL);
}

char *ft_strdup(char *s)
{
	int i = ft_strlen(s);
	char *a = malloc(i + 1);
	if(!a)
		return(NULL);
	ft_strcpy(a, s);
	return(a);
}

char *ft_strjoin(char *s1, char *s2)
{
	int i = ft_strlen(s1);
	int j = ft_strlen(s2);
	char *a = malloc(i + j + 1);
	if(!a || !s1 || !s2)
		return(NULL);
	ft_strcpy(a, s1);
	ft_strcpy(a + i, s2);
	free(s1);
	return(a);
}

char *get_next_line(int fd)
{
	static char buf[BUFFER_SIZE];
	char *line = ft_strdup(buf);
	char *nline;
	int byte;
	int i;
	while(!ft_strchr(line, '\n') && byte > 0)
	{
		byte = read(fd, buf, BUFFER_SIZE);
		if(byte < 0)
			break;
		buf[byte] = '\0';
		line = ft_strjoin(line, buf);
	}
	if(!(i = ft_strlen(line)))
		return(free(line), NULL);
	if((nline = ft_strchr(line, '\n')))
	{
		i = (nline - line) + 1;
		ft_strcpy(buf, nline + 1);
	}
	else
		buf[i] = '\0';
	line[i] = '\0';
	return(line);
}
