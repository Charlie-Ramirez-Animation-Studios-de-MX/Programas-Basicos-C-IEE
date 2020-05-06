#include <iostream>
#include <stdio.h>
#include <windows.h>
 void gotoxy(int x,int y)
 {  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 fecha()
 {  
      gotoxy(60,1);  
      printf("");
	  system("time/t");
	   gotoxy(60,0);  
      printf(""); 
	  system("date/t") ;
	  system("pause");
}
         
