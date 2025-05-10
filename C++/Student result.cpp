#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,i,sum=0;

    cout<< "Enter Number of Student : ";
    cin>>n;
    int student[n];

    for(i=0;i<n;i++)
    {
        cout<< "Mark of student "<<i+1<<" = ";
        cin>>student[i];
        sum = sum+student[i];
    }

     float avg = (float) sum/n;

    cout<<"Total marks = "<<sum<<endl;
    cout<<"Average = "<<avg<<endl;

    int max =student[0];
    int min =student[0];

    for(i=1;i<n;i++)
    {
        if(max<student[i])
        {
            max=student[i];
        }
    }

     for(i=1;i<n;i++)
    {
        if(min>student[i])
        {
            min=student[i];
        }
    }

   cout<<"Maximum marks = "<<max<<endl;
   cout<<"Minimum marks = "<<min<<endl;


    getch();
}
