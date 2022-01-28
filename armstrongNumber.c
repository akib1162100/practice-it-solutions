#include<stdio.h>
#include<stdlib.h>

int power(int x,int y)
{
    if(y==0)
    {
        return 1;
    }
    else
    {
        return x*power(x,y-1);
    }
}

int isArmstrong(int x)
{
    int i=0,temp,nDigits=0,sum=0;
    int* digits;
    temp=x;
    if(x==0)
    {
        return 0;
    }
    while(temp!=0)
    {
        nDigits++;
        temp=temp/10;
    }
    digits=(int*)malloc(nDigits*sizeof(int));
    temp=x;
    while(temp!=0)
    {
        *(digits+i)=temp%10;
        temp=temp/10;
        i++;
    }
    for (i=1;i<=nDigits;i++)
    {
        sum=sum+power(*(digits+i-1),nDigits);

    }
    if(sum==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    if(isArmstrong(x))
    {
        printf("%d is Armstrong number \n",x);
    }
    else
    {
        printf("%d is not Armstrong number \n",x);
    }
    return 0;
}