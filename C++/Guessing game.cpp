#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
   while(1)
   {
        int guess,random;

    cout<<"Enter your guess 1 to 5 : ";
    cin>>guess;

    random = 1+rand()%5;

    if(guess==random)
    {
        cout<<"You have won "<<endl<<endl;
    }
    else
    {
        cout<<"You have lost"<<endl;
        cout<<"Try Again"<<endl;
        cout<<"Random Number = "<<random<<endl;
    }
   }

    getch();
}


