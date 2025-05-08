#include<stdio.h>
int main()
{
    int m,sum=0,a=1;
    printf("enter the number");
    scanf("%d",&m);

    printf("1+3+5+....+%d",m);

    while(a<=m){
        sum=sum+a;
        a=a+2;
    }
    printf(" = %d" ,sum);
    return 0;
}
