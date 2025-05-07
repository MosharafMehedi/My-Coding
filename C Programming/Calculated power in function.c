#include<stdio.h>

 void calculatepower(double base,double exp)
{

 double result=1,i;

 for(i=1;i<=exp;i++)
    {
        result = result*base;
    }

    printf("Calculated power = %lf",result);
}
int main()
{
    double base,exp,result=1,i;

    printf("Enter base : ");
    scanf("%lf",&base);

    printf("Enter the exponent :");
    scanf("%lf",&exp);

   calculatepower(base,exp);

   return 0;

}

