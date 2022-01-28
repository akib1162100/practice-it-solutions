#include<stdio.h>
#include<stdlib.h>

int* fibonacchi(int n)
{
    int i;
    int* fib1 = (int*)malloc(n*sizeof(int));
    fib1[0]=0;
    fib1[1]=1;
    if(n>1)
    {
        for(i=2;i<=n;i++)
        {
            fib1[i]=fib1[i-1]+fib1[i-2];
        }
    }
    return fib1;
}



int main()
{
    int n,i;
    printf("Enter number of term : ");
    scanf("%d",&n);
    int *fib = (int*)malloc(n*sizeof(int));
    int *fib1 = (int*)malloc(n*sizeof(int));
    // for (i=0;i<n;i++)
    // {
    //     fib[i]=0;
    // }
    fib1=fibonacchi(n);
    printf("Fibonacchi series : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(fib1+i));
    }
    return 0;
}