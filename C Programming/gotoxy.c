#include<stdio.h>
#include<windows.h>
int main()
{
    COORD coord = {0,0};

    void gotoxy(int x,int y)
   {
        coord.X = x;
        coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
   }
    gotoxy(5,7);

    printf("Hello");


    getch();
}

