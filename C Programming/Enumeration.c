#include<stdio.h>
enum days_of_week
{
    sun,mon,tue,wed,thu,fri,sat
};
int main()
{
    enum days_of_week day1,day2;

    day1=mon;
    day2=fri;
    int diff=day2-day1;

    printf("day1 = %d\n",day1);
    printf("day2 = %d\n",day2);
    printf("different = %d\n",diff);
    return 0;
}
