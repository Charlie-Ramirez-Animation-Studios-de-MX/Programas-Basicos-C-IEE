#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <hola.h>
#include <bye.h>
#include <hora.h>
#include <Portada.h>
#include <29pit.h>
#include <mmsystem.h>
#pragma comment( lib, "winmm" )
#define USUARIO "charlie"
#define CLAVE "1155"
#define LONGITUD 80


int main() 
{

	system("cls");
    system("color 16");
    char usuario[LONGITUD + 1];
    char clave[LONGITUD + 1];
    int intento = 0;
    int ingresa = 0;
    char caracter;
    int i = 0;
    do {
        i = 0;
        system("cls");
        PlaySound("G:\\Desktop\\Dumpers\\Longhorn Sounds\\LHR Logon.wav", NULL, SND_SYNC);
        printf("\n\t\t\tBienvenido ingresa tus datos\n");
        printf("\t\t\t  ########################\n");
        printf("\n\tTu Usuario: ");
        gets(usuario);
        printf("\tPASS: ");
        while (caracter = getch()) {
            if (caracter == 13) {
                clave[i] = '\0';
                break;

            } else if (caracter == 8) {
                if (i > 0) {
                    i--;
                    printf("\b \b");
                }

            } else {
                if (i < LONGITUD) {
                    printf("*");
                    clave[i] = caracter;
                    i++;
                }
            }
        }

        if (strcmp(usuario, USUARIO) == 0 && strcmp(clave, CLAVE) == 0) {
            ingresa = 1;

        } else {
            printf("\n\tUsuario y/o clave son incorrectos\n");
            intento++;
            getchar();
        }

    } while (intento < 3 && ingresa == 0);

    if (ingresa == 1) {
        printf("\n\tHola, Bienvenido al Sistema\n");
         char soundfile[] = "G:\\Desktop\\Cup.wav" ;
      PlaySound((LPCSTR)soundfile, NULL, SND_FILENAME | SND_ASYNC );
       	hora();
		printf("\n \n \n \n \t");
		holi();
		portada();
		printf("\n \n \n \n \t");
		printf("\t Programa Que calcula el Descuento con Base a una compra de cierto importe");
		printf("\n");
		progra();
		printf("\n");
		    system("PAUSE");
		system("explorer.exe G:\\Desktop\\img108.jpg");
system("explorer.exe G:\\Desktop\\VID_20191119_145019.mp4");
	    system("PAUSE");
		bye();
		PlaySound("G:\\Desktop\\slowwinxp.wav", NULL, SND_SYNC);
    } else {
        printf("\n\tHa sobrepasado el numero maximo de intentos permitidos\n");
    }
    system("PAUSE");
    return 0;
}
