unsigned int    lcm(unsigned int a, unsigned int b)
{   
    int lcm;
    int i = 2;

    if(a == 0 && b == 0)
        lcm = 0;
    else if(a == 1 && b == 1)
        lcm = a * b;
    else
    {
       while(i <= (a * b))
       {
            if(i%a == 0 && i%b==0)
            {
                lcm = i;
                break;
            }
            i++;
       } 
    }
    return(lcm);
}

#include <stdio.h>

int main()
{
    printf("%d", lcm(0,12));
    return 0;
}