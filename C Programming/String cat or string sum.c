#include<stdio.h>
int main()
{
    char str1[]="My name is ";
    char str2[]="Mosharaf";

    strcat(str1, str2);

    printf("string = %s\n",str1);

    return 0;
}

