#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
    char *str = s1;
    
    while((*s1++ = *s2++));
    return(str);
}

#include <stdio.h>

int main ()
{
    char *s2 = "hello world";
    char *s1 ;

    
    printf("%s",ft_strcpy(s1,s2));
}