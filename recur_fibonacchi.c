#include<stdio.h>
#include<stdlib.h>

int* fibonacchi(int* fib,int n)
{
    if(n==0)
    {
        fib[0]=0;
    }
    if(n==1)
    {
        fib[1]=1;
    }
    if(n>1)
    {
        
        // fib[n]=*fibonacchi(fib,n-1)+*fibonacchi(fib,n-2);    also valid
        *(fib+n)=*fibonacchi(fib,n-1)+*fibonacchi(fib,n-2);
    }
}



int main()
{
    int n;
    printf("Enter number of term : ");
    scanf("%d",&n);
    int *fib = (int*)malloc(n*sizeof(int));
    fibonacchi(fib,n);
    printf("Fibonacchi series : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(fib+i));
    }
    return 0;
}