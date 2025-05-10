#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

int main()
{

 string str1 = "Mosharaf";
 string str2 = "Hossain";
 string str3;

 str3=str1;
 cout<<"Str3 :"<<str3<<endl;

 str3 = str1 + str2;
 cout<<"str3 :"<<str3<<endl;

 int len = str1.size();
 cout<<"Length of string 1 = "<<len<<endl;

    getch();
}


