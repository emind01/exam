#include <unistd.h>

void    till_a(char *str)
{
    int i = 0;
    int len ;

    while (str[i] && str[i] != 'a')
    {
        i++;
    }
    len = i - 1;
    i = 0;
    while (i <= len)
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main (){
    till_a("hgsie4aee");
}