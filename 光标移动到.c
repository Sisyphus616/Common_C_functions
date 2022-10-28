#include<windows.h>
void goto_xy( int x , int y )
{
	HANDLE hOut;
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos={x,y};
	SetConsoleCursorPosition(hOut,pos);
}

//写程序可用，用于把光标移动到程序框外以隐藏
