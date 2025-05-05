#include<stdio.h>
union test
{
    int x,y;
};
int main()
{
    union test t1;
    t1.x=10;
    printf("t1x = %d\n",t1.x);
    printf("t1y = %d\n",t1.y);

    t1.y=20;
    printf("t1x = %d\n",t1.x);
    printf("t1y = %d\n",t1.y);

    return 0;
}

