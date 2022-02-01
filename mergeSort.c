#include<stdio.h>
#include<stdlib.h>

void merge(int *p,int left,int mid,int right)
{
    int ini;
    int lSize = mid-left+1;
    int rSize = right-mid;
    int *l = (int*)malloc(lSize*sizeof(int));
    int *r = (int*)malloc(rSize*sizeof(int));
    for (ini=0;ini<lSize;ini++)
    {
        *(l+ini)= *(p+left+ini);
    }
    for (ini=0;ini<rSize;ini++)
    {
        *(r+ini)= *(p+mid+1+ini);
    }

    int i=0,j=0,k=left;
    // printf("merging");
    while(i<lSize && j<rSize)
    {
        if(*(l+i)>=*(r+j))
        {
            *(p+k) = *(r+j); //if ascending 
            //*(p+k) = *(l+i); if descending
            j++;
        }
        else 
        {
            *(p+k) = *(l+i); //if ascending
            //*(p+k) = *(r+j); if descending 
            i++;
        }
        k++;
    }
    while(i<lSize)
    {
        *(p+k) = *(l+i);
        i++;
        k++;
    }
    while(j<rSize)
    {
        *(p+k) = *(r+j);
        j++;
        k++;
    }
}


void mergeSort(int *p, int lIndex,int rIndex)
{
    int l,r,m;
    l = lIndex;
    r = rIndex;
    if(l<r)
    {
        m = l+(r-l)/2;
        mergeSort(p,l,m);
        mergeSort(p,m+1,r);
        merge(p,l,m,r);
    }
}


int main()
{
    int x,n,i,*p;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    mergeSort(p,0,n-1);
    printf("sorted array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d     ",p[i]);
    }

    return 0;
}