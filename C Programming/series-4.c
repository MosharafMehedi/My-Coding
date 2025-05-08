#include<stdio.h>
int main()
{
    double n,i,sum=0;
    printf("enter number");
    scanf("%lf",&n);

    for(i=1;i<=n;i++){
        sum = sum+(1/i);
    }
    printf("sum = %d",sum);
    return 0;
}
