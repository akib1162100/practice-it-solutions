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

int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    if(isPrime(x))
    {
        printf("%d is prime number \n",x);
    }
    else
    {
        printf("%d is not prime number \n",x);
    }
    return 0;
}