#include<stdio.h>
int main()
{
    int frist=0,second=1,count=0,fibo,n;
    printf("enter number");
    scanf("%d",&n);

    while(count<n){
        if(count<=0)
            fibo=count;
        else{
            fibo=frist+second;
            frist=second;
            second=fibo;
        }
        printf("  %d",fibo);
        count++;
    }
    return 0;
}
