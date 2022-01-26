#include <stdio.h>
#include <stdlib.h>

long factorial(long x)
{
    // long fac = 1;
    if(x<0)
    {
        printf("factorial can't be negative\n");
        exit(0);
    }
    if (x==0)
    {
        return x=1;
    }
    if (x==1)
    {
        return x;
    }
    // fac = fac * factorial(x-1)
    return (x*factorial(x-1));
}


int main()
{
    long x;
    long fac;
    printf("Enter a number ");
    scanf("%ld", &x);
    fac = factorial(x);
    printf("factorial of %ld is %ld \n",x,fac);
    return 0;
}