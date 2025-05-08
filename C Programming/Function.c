#include<stdio.h>

   int sum(int a,int b,int c)
{
    return a+b+c;

}
    int sub(int a,int b,int c)
{
    return a-b-c;

}
int main()
{
    int result = sum(5,5,7);

    printf("The Sum is = %d\n",result);

    result = sub(19,6,7);
    printf("The  Sub is = %d\n",result);


}
