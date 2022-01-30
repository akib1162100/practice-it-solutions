#include<stdio.h>
#include<stdlib.h>

int* max_and_min(int *p,int n)
{
    int max_num,min_num,i,temp_max,temp_min;
    temp_max=0;
    temp_min=1410065407;
    for(i=0;i<n;i++)
    {
        if(temp_max<p[i])
        {
            temp_max=p[i];
        }
        if(temp_min>p[i])
        {
            temp_min=p[i];
        }
    }
    max_num=temp_max;
    min_num=temp_min;
    int *p_max_min=(int*)malloc(sizeof(int)*2);
    p_max_min[0]=max_num;
    p_max_min[1]=min_num;
    return p_max_min;
}

int* inpList(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    return p;
}

int main()
{
    int x,n;
    int *p, *q;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    p=inpList(p,n);
    q=(int*)malloc(2*sizeof(int));
    q= max_and_min(p,n);
    printf("max number is %d\n",q[0]);
    printf("min number is %d\n",q[1]);
    return 0;
}