#include<stdio.h>
double triarea(double b,double h)
{
    return 0.5*b*h;
}

int main()
{
    double base,hight;

    printf("enter base & hight : ");
    scanf("%lf %lf",&base,&hight);

    double result = triarea(base,hight);
    printf("Triangle area is = %lf\n",result);

    return 0;
}

