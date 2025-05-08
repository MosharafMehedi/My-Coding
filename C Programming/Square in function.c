#include<stdio.h>
int square(int a)
{
    return a*a;
}

int main()
{
    int n;

    printf("enter any number : ");
    scanf("%d",&n);

    int result = square(n);
    printf("Square is = %d\n",result);

    return 0;
}
