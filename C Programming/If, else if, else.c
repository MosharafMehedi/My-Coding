#include<stdio.h>
int main()
{
   int num1,num2;

   printf("enter two number :");
      scanf("%d %d",&num1,&num2);

   if(num1>num2)
        printf("Large = %d",num1);

   else if(num1<num2)
    printf("Large = %d",num2);

   else
    printf("same number");

    return 0;
}
