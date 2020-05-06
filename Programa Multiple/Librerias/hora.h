#include <iostream>
#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

hora() {
	system("color 16");
	gotoxy(60,1);
		printf("");
		system("time/t");
	gotoxy(60,0);
	printf("");
		system("date/t");
	return 0;
}
