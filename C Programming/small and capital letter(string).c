#include<stdio.h>
int main()
{
    int i,capital,small,digit,other;
    char str[50];
    i=capital=small=digit=other=0;

    printf("Enter the string : ");
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]>=65&&str[i]<=90)
            capital++;

       else if(str[i]>=97&&str[i]<=122)
            small++;

           else if(str[i]>=48&&str[i]<=57)
            digit++;

           else
            other++;

            i++;
    }

    printf("Number of Capital latter = %d\n",capital);
    printf("Number of small latter = %d\n",small);
    printf("Number of digit latter = %d\n",digit);
    printf("Number of other latter = %d\n",other);

    return 0;
}

