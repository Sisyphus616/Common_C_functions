void HideCursor() 														// 用于隐藏光标
{
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};  							// 第二个值为0表示隐藏光标
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

//写程序、做游戏可用
