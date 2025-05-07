#include<stdio.h>
int main()
{
    int m[5],i,sum=0;
    m[0]=5;
    m[1]=3;
    m[2]=7;
    m[3]=8;
    m[4]=9;
    for(i=0;i<=4;i++){
    sum = sum+m[i];
    }
    printf("%d",sum);

    return 0;

}
