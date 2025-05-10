#include<iostream>
#include<conio.h>
using namespace std;

class parents
{
public:
    int id_p;
};

class child: public parents
{
public:
    int id_c;
};

int main()
{
    child c1;
    c1.id_c = 22;
    c1.id_p = 50;

    cout<< "Child id is : "<<c1.id_c<<endl;
    cout<< "Parents id is : "<<c1.id_p<<endl;

    getch;
}
