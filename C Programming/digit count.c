#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter any number");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        ++count;

    }
    printf("total digit %d\n",count);

    return 0;
}
