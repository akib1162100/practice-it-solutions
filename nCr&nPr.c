#include <stdio.h>
#include <stdlib.h>

long factorial(long x)
{
    long fac = 1;
    int i;
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

    for (i=1;i<=x;i++)
    {
        fac = fac * i;
    }

    return fac;
}


int main()
{
    long n,r;
    long facN,facR,facNR;
    printf("Enter a n : ");
    scanf("%ld", &n);
    printf("Enter a r : ");
    scanf("%ld", &r);
    facN = factorial(n);
    facR = factorial(r);
    facNR = factorial(n-r);

    printf("nCr of %ld and%ld is %ld \n",n,r,(facN/(facR*facNR)));
    printf("nPr of %ld and%ld is %ld \n",n,r,(facN/(facNR)));
    return 0;
}