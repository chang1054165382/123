//jiemian.h
#ifndef _INTERFACE_H_  
#define _INTERFACE_H_   
#include <iostream>  
#include <windows.h>  
using namespace std;  
//class main;
  
void gotoxy(int x, int y)//��������   
{  
    COORD c;  
    c.X = x;  
    c.Y = y;  
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);  
}  
  
bool setcolor(WORD wAttributes)//������ɫ   
{  
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  
    if (hConsole == INVALID_HANDLE_VALUE)  
        return false;  
    bool bResult = SetConsoleTextAttribute(hConsole, wAttributes);  
    return bResult;  
}  
  
void Front()//��ʼ�Ľ���   
{  
    gotoxy(22, 10);  
    setcolor(10);  
    cout << "ѧ��";  
    setcolor(12);  
    cout << "����";  
    setcolor(0x0007);  
    cout << "ϵͳ";  
    setcolor(9);  
    cout << "���";  
    setcolor(0x0006);  
    cout << "ʵ��";  
    gotoxy(42, 13);  
    setcolor(15);  
    cout << "BY ���� and ���";  
    Sleep(3000);  
    system("cls");  
}  
  
void Back()//�����Ľ���   
{  
    system("cls");  
    setcolor(15);  
    gotoxy(20, 8);  
    cout << "��л��ʹ��*ѧ������ϵͳ*" << endl << endl;  
    int i;  
    for (i = 0; i < 10; i++){  
        gotoxy(20 + i, 9);  
        cout << "��ӭ���´�ʹ��!!!";  
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