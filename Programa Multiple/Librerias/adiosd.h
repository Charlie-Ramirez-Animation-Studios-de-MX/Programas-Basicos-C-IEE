#include <conio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
adiosd ()
{
    char espera;
    system("color 0a");
    char p1;
    FILE *ar; 

	system("cls");
	 if ((ar=fopen("H:\\adiosss.txt","r")) != NULL) //OBSERVAR QUE LA IMAGEN VA EN LA USB
       {
         while(!feof(ar))
         {
           p1=fgetc(ar); 
           Sleep(0);
           putchar(p1); 
         }
          fclose(ar); 
       }
    else
      {
        printf("\n\n\t\t No se pudo abrir el archivo"); 
      }
     printf("\n\n\t\t");
     system("PAUSE");
     printf("\n\n\t\t");
	 return 0;  
}
