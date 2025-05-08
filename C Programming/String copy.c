#include<stdio.h>
int main()
{
    char source[]="c programming";
    char target[20];

    strcpy(target,source);

    printf("source string = %s\n",source);
    printf("target string = %s\n",source);

    return 0;
}
