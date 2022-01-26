#include<stdio.h>
#include<stdlib.h>


int** initializeZero(int dim_x,int dim_y)
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
            arr1[i][j] = 0;
            // scanf("%d",&arr1[i][j]);
        }
    }

    return arr1;
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



int** matmul(int** a,int** b,int dim_x1,int dim_y2,int common_dim)
{
    int i,j,k;
    int** c;
    c = initializeZero(dim_x1,dim_y2);
    for (i=0;i<dim_x1;i++)
    {
        for (j = 0; j < dim_y2; j++)
        {
            for(k=0 ; k<common_dim;k++)
            {
                // c[i][j]+=a[i][k]*b[k][j];
                *(*(c+i)+j)+= *(*(a+i)+k)* *(*(b+k)+j);
            }
        }
        
    }
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
    int** arr3=matmul(arr1,arr2,dim_x1,dim_y2,dim_y1);
    return 0;
}