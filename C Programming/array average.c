#include<stdio.h>
int main()
{
    int m[5],i,sum=0;
   printf("enter 5 number");
   for(i=0;i<=4;i++){
        scanf("%d",&m[i]);
   }

    for(i=0;i<=4;i++){
    sum = sum+m[i];
    }
    printf("%d",sum/5);

    return 0;

}
