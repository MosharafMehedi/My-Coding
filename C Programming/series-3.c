#include<stdio.h>
int main()
{
    int n,m,a=1,b=2,sum=0;
    printf("enter two number:");
    scanf("%d %d",&n,&m);

    printf("1*2+2*3+.....+%d*%d",n,m);
    while(a<=n&& b<=m){
        sum = sum+a*b;
        a=a+1;
        b=b+1;
    }
    printf(" = %d",sum);
    return 0;

}
