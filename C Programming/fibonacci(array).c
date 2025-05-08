#include<stdio.h>
int main()
{
    int i, n,m[30];
    printf("enter the term : ");
    scanf("%d",&n);

    m[0]=0;
    m[1]=1;

    for(i=2; i<n; i++)
    {
        m[i]=m[i-1]+m[i-2];
    }
    printf("\n");
    for(i=0 ; i<n; i++)
    {
        printf("%d  ",m[i]);
    }
    return 0;
}
