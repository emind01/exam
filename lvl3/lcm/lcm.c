unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int n;

    if (a == 0 || b == 0)
        return 0;
    if (a > b)
        n = a;
    else 
        n = b;
    while(1)
    {
        if(n % a && n % b)
            return n;
        n++; 
    }
}