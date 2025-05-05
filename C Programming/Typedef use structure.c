#include<stdio.h>
struct book
{
    char name[20];
    int price;
};
int main()
{

    typedef struct book Book;

    Book b = {"amar bangla boi",120};
    printf("Book name = %s\n",b.name);
    printf("Price = %d\n",b.price);

    return 0;
}

