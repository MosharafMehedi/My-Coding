#include<stdio.h>
int main()
{
    int num[]={5,8,10,14,5,7};
    int i, value,pos=-1;

    printf("search the number");
    scanf("%d",&value);

    for(i=0;i<=6;i++)
    {
        if(value==num[i]){
            pos=i+1;
        break;}
    }
    if(pos==-1)
    {
        printf("item is not found");
    }
    else
        {
        printf("the value is found at position %d",pos);
    }
    return 0;
}
