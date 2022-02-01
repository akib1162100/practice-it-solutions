#include<stdio.h>
#include<stdlib.h>
int binarySearch(int *arr, int size, int key)
{
    int low = 0;
    int high = size - 1;
    int mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if (*(arr+mid)==key)
        {
            return mid;
        }
        else if(key<*(arr+mid))
        {
            high = mid -1; 
        }
        else
        {
            low = mid+1;
        }
    }
    return -1;
}

int main()
{
    int n,i,*p;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    printf("Enter the element to be searched: ");
    int x;
    scanf("%d",&x);
    int index = binarySearch(p,n,x);
    if (index==-1)
    {
        printf("No such element in the list");
    }
    else
    {
        printf("The element is present at index %d",index);
    }
    return 0;
}