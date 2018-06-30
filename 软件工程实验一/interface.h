//jiemian.h
#ifndef _INTERFACE_H_  
#define _INTERFACE_H_   
#include <iostream>  
#include <windows.h>  
using namespace std;  
//class main;
  
void gotoxy(int x, int y)//设置坐标   
{  
    COORD c;  
    c.X = x;  
    c.Y = y;  
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);  
}  
  
bool setcolor(WORD wAttributes)//设置颜色   
{  
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  
    if (hConsole == INVALID_HANDLE_VALUE)  
        return false;  
    bool bResult = SetConsoleTextAttribute(hConsole, wAttributes);  
    return bResult;  
}  
  
void Front()//开始的界面   
{  
    gotoxy(22, 10);  
    setcolor(10);  
    cout << "学生";  
    setcolor(12);  
    cout << "管理";  
    setcolor(0x0007);  
    cout << "系统";  
    setcolor(9);  
    cout << "设计";  
    setcolor(0x0006);  
    cout << "实现";  
    gotoxy(42, 13);  
    setcolor(15);  
    cout << "BY 徐洋 and 雷婕";  
    Sleep(3000);  
    system("cls");  
}  
  
void Back()//结束的界面   
{  
    system("cls");  
    setcolor(15);  
    gotoxy(20, 8);  
    cout << "感谢你使用*学生管理系统*" << endl << endl;  
    int i;  
    for (i = 0; i < 10; i++){  
        gotoxy(20 + i, 9);  
        cout << "欢迎你下次使用!!!";  
        Sleep(200);  
        if (i != 9){  
            gotoxy(20 + i, 9);  
            putchar(' ');  
        }  
    }  
    Sleep(3000);  
    exit(0);  
}  
  
#endif  