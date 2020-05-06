#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <MMSystem.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <wchar.h>
#include <locale.h>
#define CONTRA "p4tricio"
void horafecha();
void gotoxy(int, int);  
void portada();
int password();
void musica();
void saludo();
void selfie();
void colores();
void problema();
void video();

using namespace std;
int main(){
    int c;
    colores();
    musica();
    portada();
    horafecha();
    saludo();
    c = password();
    if(c==TRUE){
        problema();
        selfie();
        video();
    }

    return 1;
}

void colores(){
    system("color B1");
}

void gotoxy(int x, int y){
     HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}
void horafecha(){
    system("cls");
    gotoxy(60,1);  
    printf("");
    system("time/t");
    gotoxy(60,0);  
    printf(""); 
    system("date/t") ;
    system("pause");

}
void portada(){
    char a[] = {" UNIVERSIDAD NACIONAL AUTONOMA DE MEXICO "};
    char b[] = {" FACULTAD DE ESTUDIOS SUPERIORES "};
    char c[] = {" PLANTEL ARAGON "};
    char d[] = {" INGENIERIA ELECTRICA ELECTRONICA "};
    char e[] = {" ASIGNATURA: FUNDAMENTOS DE PROGRAMACION "};
    char f[] = {" ALUMNO: GERARDO RODRIGUEZ CARDENAS "};
    char g[] = {" PROFESOR: ING. ALEJANDRO RODRIGUEZ LORENZANA "};
    char h[] = {" GRUPO: 1155 "};
    char j[] = {" PROGRAMA DEL EJEMPLO: 3.7 "};
    int z = 10;

	printf("\n\n\t\t"); Sleep(z);
	printf("\n\t\t\311");Sleep(z);
		for(int i=0;i<=46;i++){
		printf("\315");
		Sleep(z);
		}
	printf("\273");Sleep(z);

    //UNAM
	printf("\n\t\t\272 ");Sleep(z);
    for(int i = 0; (a[i+1]) != '\0'; i++){
            printf("\a%c", a[i]); Sleep(z);
        }
    printf("\t\272");Sleep(z);
    //----------------------------------------------------------------------//

    printf("\n\t\t");Sleep(z);printf("\314");Sleep(z);
		for(int i=0;i<=46;i++){
		printf("\315");Sleep(z);
		}
	printf("\271");Sleep(z);

    //FES
    printf("\n\t\t\272\t");Sleep(z);
    for(int i = 0; (b[i+1]) != '\0'; i++){
            printf("\a%c", b[i]); Sleep(z);
        }
    printf("\t\272");Sleep(z);
    //----------------------------------------------------------------------//

    printf("\n\t\t");Sleep(z);printf("\314");Sleep(z);
		for(int i=0;i<=46;i++)
		{
		printf("\315");Sleep(z);
		}
	printf("\271");Sleep(z);

    //PLANTEL ARAGON
    printf("\n\t\t\272\t\t");Sleep(z);
    for(int i = 0; (c[i+1]) != '\0'; i++){
            printf("\a%c", c[i]); Sleep(z);
        }
    printf("\t\t\t\272");Sleep(z);
    //----------------------------------------------------------------------//

    printf("\n\t\t");Sleep(z);printf("\314");Sleep(z);
		for(int i=0;i<=46;i++)
		{
		printf("\315");Sleep(z);
		}
	printf("\271");Sleep(z);

    //CARRERA
    printf("\n\t\t\272\t");Sleep(z);
    for(int i = 0; (d[i+1]) != '\0'; i++){
            printf("\a%c", d[i]); Sleep(z);
        }
    printf("\t\272"); Sleep(z);
    //----------------------------------------------------------------------//

    printf("\n\t\t");Sleep(z);printf("\314");Sleep(z);
		for(int i=0;i<=46;i++)
		{
		printf("\315");Sleep(z);
		}
	printf("\271");Sleep(z);

    printf("\n\t\t\272");Sleep(z); printf("					\t\272");Sleep(z);
    printf("\n\t\t\272");Sleep(z); printf("					\t\272");Sleep(z);

    //ASIGNATURA
    printf("\n\t\t\272");Sleep(z);
    for(int i = 0; (e[i+1]) != '\0'; i++){
            printf("\a%c", e[i]); Sleep(z);
        }
    printf("\t\272");Sleep(z);
    //----------------------------------------------------------------------//

    printf("\n\t\t\272");Sleep(z); printf("					\t\272");Sleep(z);
    printf("\n\t\t\272");Sleep(z); printf("					\t\272");Sleep(z);

    //TU NOMBRE
    printf("\n\t\t\272");Sleep(z);
    for(int i = 0; (f[i+1]) != '\0'; i++){
            printf("\a%c", f[i]); Sleep(z);
        }
    printf("\t\t\272");Sleep(z); //AQUI QUITALE UN "\t"
    //----------------------------------------------------------------------//
    
    printf("\n\t\t\272");Sleep(z); printf("					\t\272");Sleep(z);
    printf("\n\t\t\272");Sleep(z); printf("					\t\272");Sleep(z);
    
    //NOMBRE DEL PROFE
    printf("\n\t\t\272");Sleep(z);
    for(int i = 0; (g[i+1]) != '\0'; i++){
            printf("\a%c", g[i]); Sleep(z);
        }
    printf("\t\272");Sleep(z);
    //----------------------------------------------------------------------//

    printf("\n\t\t\272");Sleep(z); printf("					\t\272");Sleep(z);
    printf("\n\t\t\272");Sleep(z); printf("					\t\272");Sleep(z);

    //GRUPO
    printf("\n\t\t\272");Sleep(z);
    for(int i = 0; (h[i+1]) != '\0'; i++){
            printf("\a%c", h[i]); Sleep(z);
        }
    printf("\t\t\t\t\t\272");Sleep(z);
    //----------------------------------------------------------------------//

    printf("\n\t\t\272");Sleep(z); printf("					\t\272");Sleep(z);
    printf("\n\t\t\272");Sleep(z); printf("					\t\272");Sleep(z);

    //PROGRAMA DEL EJEMPLO
    printf("\n\t\t\272");Sleep(z);
    for(int i = 0; (j[i+1]) != '\0'; i++){
            printf("\a%c", j[i]); Sleep(z);
        }
    printf("\t\t\t\272");Sleep(z);
    //----------------------------------------------------------------------//

    printf("\n\t\t\272");Sleep(z); printf("					\t\272");Sleep(z);

	printf("\n\t\t\310");Sleep(z);
	for(int i=0;i<=46;i++)
	{
	printf("\315");Sleep(z);
	}
	printf("\274");
	printf("\n\n\t\t"); Sleep(z);

	system("pause");

}

int password(){
    system("cls");
    printf("\n\tINICIO");
    int x=3;
    po:
    string pass;
    cout<<"\n Ingresa password\t(Recuerda que tienes solo "<<x; cout<<" intento(s) mas)\n\n\t"<<endl;
    cin>>pass;
    x--;
        if(pass == CONTRA){
        cout << "\n\t" << "procesando ";
            for (int i=0;i<=50;i++){
            printf("."); Sleep(50);
            }
        Sleep(200);
        }
    else {
        if(x!=0){
    cout<<" Password incorrecto, por favor intenta de nuevo";
    system("cls");
        }
    if(x==0){
        printf("\n Lo siento se acabaron tus intentos");
        return 0;
    }
    goto po;
    }
    printf("\n");
    system ("PAUSE>>NULL");
    system("pause");
    return 1;
}
void musica(){
     PlaySoundA((LPCSTR) "no.WAV", NULL, SND_FILENAME | SND_ASYNC);
}
void saludo(){
    char espera;
    char p1;
    FILE *ar; 

	system("cls");
	 if ((ar=fopen("hola.txt","r")) != NULL)
       {
         while(!feof(ar))
         {
           p1=fgetc(ar); 
           Sleep(10);
           putchar(p1); 
         }
          fclose(ar); 
       }
    else
      {
        printf("\n\n\t\t No se pudo encontrar el archivo"); 
      }
     printf("\n\n\t\t");
     system("PAUSE");
     printf("\n\n\t\t");
}
void selfie(){
    system("explorer.exe imagen.jpg"); 
    system("pause");
}

void problema(){
    int n,MED=0,CHI=0, GRA=0, i=1;
    float v;
    system("cls");
    printf("\nPROBLEMA 46\nEjercicio del libro 3.7\n");  
    printf("\nDigitalice el numero de ventas: ");
    scanf("%d", &n);
    while(i<=n){
        printf("Introduce el precio del producto vendido No. %d : ", i);
        scanf("%f", &v);
        if(v<=200){
            CHI+=1;
        }
        else if(v<400){
            MED+=1;
        }
        else{
            GRA+=1;
        }
    i+=1;
    }
    printf("El numero de productos chicos es de = %d\n", CHI);
    printf("El numero de productos medianos es de = %d\n", MED);
    printf("El numero de productos grandes es de = %d\n", GRA);
    system("pause");
    system("cls");
}
void video(){
    system("explorer.exe vidio.avi"); 
    system("pause");
}