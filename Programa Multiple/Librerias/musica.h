#include <iostream> 
#include <windows.h>
 #include <conio.h>
 #include <stdio.h>
 /* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
 musica() { 
system("color F3"); 
printf("\t\t la cancion que esta escuchabdo es :\n\n\n\n\n\t"); 
printf("\n\n\t luna\n\n\t"); 
char soundfile[] = "H:\\cancion-programa.wav" ; 
cout<<PlaySound((LPCSTR)soundfile, NULL, SND_FILENAME | SND_ASYNC );
 getch(); 
return 0; } 
