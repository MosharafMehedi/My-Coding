#include<stdio.h>
int main()
{
    int n,row,col;
    printf("enter the n : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
    }
    for(col=1;col<=row;col++){
        printf("%d",col);
    }
    printf("\n");
    }

}

