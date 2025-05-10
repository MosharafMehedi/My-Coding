#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    double F,C,K;



    cout<< "Enter Celcius : ";
    cin>>C;

    F = 1.8*C+32;
    cout<< "Fahrenheit = "<<F<<endl;

    K = C+273;
    cout<< "Kelvin = "<<K;

    getch();
}
