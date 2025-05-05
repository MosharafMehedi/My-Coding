#include<stdio.h>
union test1
{
    int x,y;
};
union test2
{
    char ch;
    int x;
};
union test3
{
    char name[16];
    double d;
};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;

    printf("Size of test1 = %d\n",sizeof(t1));
    printf("Size of test1 = %d\n",sizeof(t2));
    printf("Size of test1 = %d\n",sizeof(t3));


    return 0;
}


