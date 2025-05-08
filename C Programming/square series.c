#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter any number");
    scanf("%d",&n);

   printf("1^2+2^2+3^3+....%d^2",n);

    for(i=1;i<=n;i++){
        sum = sum+i*i;
    }
    printf(" = %d",sum);
    return 0;
}
