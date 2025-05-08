#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("enter number");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        result=result*i;
    }
    printf("result = %d",result);
    return 0;
}
