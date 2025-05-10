#include<iostream>
#include<conio.h>
using namespace std;

void disply(int num[],int arraysize)
{
    for(int i=0;i<arraysize;i++)
    {
        cout<<num[i]<< "  ";
    }
}


int main()
{

  int num[5] = {10,20,30,40,50};
  disply(num,5);

    getch();
}

