#include<stdio.h>
#include<stdlib.h>

int isPrime(int x)
{
    int i;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;   
}


void primeFactor(int x)
{
    int i;
    for (i=2;i<x;i++)
    {
        if (x%i==0)
        {
            if(isPrime(i))
            {
                printf("%d ",i);
            }
        }
    }
} 

int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    printf("prime factors are : ");
    primeFactor(x);
    return 0;
}