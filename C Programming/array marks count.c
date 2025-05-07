#include<stdio.h>
int main()
{
   double maths[5]={44,44,56,78,80,};
   int roll;
   for(roll=1;roll<=5;roll++){
        printf("roll:%d Marks:%lf\n",roll,maths[roll-1]);
    }
    return 0;
}

