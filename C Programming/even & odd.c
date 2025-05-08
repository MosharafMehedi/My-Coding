#include<stdio.h>
int main()
{
   int num;
   printf("enter the number");
   scanf("%d",&num);

   if(num%2==0)
    printf("even\n");

   if(num%2==1)
    printf("odd\n");
    return 0;
}

