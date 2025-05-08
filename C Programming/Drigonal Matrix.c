#include<stdio.h>
int main()
{
    int A[10][10],sum=0,i,j,row,col;
    printf("enter the row and column for Matrix : ");
    scanf("%d %d",&row,&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEntered Matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }

     printf("\nEntered Drigonal Matrix\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
           if(i==j)
            sum = sum+A[i][j];
        }

    }
    printf("sum of driagonal elements = %d\n",sum);
    return 0;
}

