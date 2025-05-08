#include<stdio.h>
int main()
{
   char ch;
   printf("enter the latter ;");
   scanf("%c",&ch);

   if(ch>='A'&&ch<='Z')
    printf("capital latter");

    else if(ch>='a'&&ch<='z')
    printf("small latter");

    else
        printf("not a letter");

    return 0;
}
