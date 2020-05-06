#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

holi() {
	char espera;
	system("color 16");
	char p1;
	FILE *ar;
	if((ar=fopen("G:\\Desktop\\bit.txt","r")) !=NULL){
		while(!feof(ar)){
			p1 = fgetc(ar);
			Sleep(.5);
			putchar(p1);
		}
		fclose(ar);
	}
		else{
			printf("\n \n \t \t No se pudo abrir el archivo");
		}
	printf("\n \n \t \t");
	printf("\n \n \t \t");
	return 0;
}
