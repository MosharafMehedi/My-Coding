#include<stdio.h>
int main()
{
    int A[10][10],Transpose[10][10],i,j,row,col;
    printf("Enter the row and column for Matrix ");
    scanf("%d %d",&row,&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            Transpose[j][i]=A[i][j];
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

     printf("\nEntered Transpose Matrix\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d",Transpose[i][j]);
        }
        printf("\n");
    }
}
