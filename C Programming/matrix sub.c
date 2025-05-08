#include<stdio.h>
int main()
{
    int i,j;
    int A[3][4],B[3][4],C[3][4];

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&A[i][j]);

        }
    }
    printf("A\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {

            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&B[i][j]);

        }
    }
    printf("B\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {

            printf("%d",B[i][j]);
        }
        printf("\n");
    }
    printf("C\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            C[i][j]=A[i][j]-B[i][j];
            printf("%d",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}



