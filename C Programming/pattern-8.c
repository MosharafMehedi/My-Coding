#include<stdio.h>
int main()
{
    int n,col,row;
    printf("enter number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++)
            printf(" ");
        for(col=1;col<=row;col++)
            printf("*");
            for(col=row-1;col>=1;col--)
                printf("*");
        printf("\n");
    }

    return 0;
}
