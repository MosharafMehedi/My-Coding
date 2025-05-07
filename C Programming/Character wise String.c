#include<stdio.h>
int main()
{
    char m1[]="Mosharaf";
    int i=0;

    while(m1[i]!='\0')
    {
        printf("%c\n\n\a",m1[i]);
        i++;
    }

    return 0;

}

