#include<stdio.h>
#include<stdlib.h>


int** initializeZero(int dim_x,int dim_y)
{
    int i,j;
    int** arr1= (int**)malloc(dim_x*sizeof(int*));
    for (i = 0; i < dim_x; i++)
    {
        arr1[i] = (int*)malloc(dim_y*sizeof(int));
    }
    printf("Enter the elements of matrix :\n");
    for (i = 0; i < dim_x; i++)
    {
        for (j = 0; j < dim_y; j++)
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
    int** arr1= (int**)malloc(dim_x*sizeof(int*));
    for (i = 0; i < dim_x; i++)
    {
        arr1[i] = (int*)malloc(dim_y*sizeof(int));
    }
    printf("Enter the elements of matrix :\n");
    for (i = 0; i < dim_x; i++)
    {
        for (j = 0; j < dim_y; j++)
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
    return c;
}

void printMat(int** a,int dim_x,int dim_y)
{
    int i,j;
    for (i = 0; i < dim_x; i++)
    {
        for (j = 0; j < dim_y; j++)
        {
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
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
    printf("The resultant matrix is :\n");
    printMat(arr3,dim_x1,dim_y2);
    return 0;
}