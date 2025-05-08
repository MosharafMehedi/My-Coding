#include<stdio.h>
int main()
{

    int n,col,row;
    printf("enter n: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
