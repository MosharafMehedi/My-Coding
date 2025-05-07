#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter the 3 number :");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1>n2&&n1>n2)
        printf("large = %d",n1);

     else if(n2>n1&&n2>n3)
        printf("large = %d",n2);

        else if(n3>n1&&n3>n2)
        printf("large = %d",n3);

         else
            printf("number is equal");

     return 0;
}
