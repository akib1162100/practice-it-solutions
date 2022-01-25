#include<stdio.h>
#include<stdlib.h>


int** matmul(int** a,int** b)
{
    
}
int** initialize(int dim_x,int dim_y)
{
    int i,j;
    int** arr1= (int**)malloc(dim_x1*sizeof(int*));
    for (i = 0; i < dim_x1; i++)
    {
        arr1[i] = (int*)malloc(dim_y1*sizeof(int));
    }
    printf("Enter the elements of matrix :\n");
    for (i = 0; i < dim_x1; i++)
    {
        for (j = 0; j < dim_y1; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    return arr1;
}

int main()
{
    int dim_x1,dim_y1,dim_x2,dim_y2,i,j,k;
    printf("Enter the dimensions of matrix 1: ");
    scanf("%d %d",&dim_x1,&dim_y1);
    printf("Enter the dimensions of matrix 2: ");
    scanf("%d %d",&dim_x2,&dim_y2);
    if(dim_y1!=dim_x2)
    {
        printf("Matrices cannot be multiplied\n");
        return 0;
    }
    int** arr1=initialize(dim_x1,dim_y1);
    int** arr2=initialize(dim_x2,dim_y2);
    int** arr3=matmul(arr1,arr2);
    return 0;
}