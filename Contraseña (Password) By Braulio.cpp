//VERSION Editada By Charlie Ramirez Animation Studios. Con Aportes originales y Codigo base de Braulio
//12:18 AM 06-11-2019 I.E.E. FES ARAGON 1155
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//		 					PERSONALIZAR ESTE CODIGO ES MUY SENCILLO
#include <conio.h>
#define USUARIO "El pelos es pvto 123" // <----	DEFINE AQUI TU USUARIO CAMBIANDO EL TEXTO ENTRE LAS COMILLAS.   
/*
ADVERTENCIA!!!: NO UTILICES SIMBOLOS ESPECIALES COMO LA LETRA ' Ñ 'y Acentos como ' ó ' 	EN NINGUNA DE AMBAS SENTENCIAS
Puedes Usar Espacios, Mayusculas, Minusculas, guiones y Numeros Estandar. Hasta 80 caracteres (posiblemente soporta otros simbolos es cuestion de probar)
*/
#define CLAVE "1155-123"  // <----	DEFINE AQUI TU CONTRASEÑA CAMBIANDO EL TEXTO ENTRE LAS COMILLAS. [Mismas Reglas] AUTOMATIAMENTE SE CAMBIARAN A "*" CUANDO LA INGRESES
#define LONGITUD 80

int main() {
    char usuario[LONGITUD + 1];
    char clave[LONGITUD + 1];
    int intento = 0;
    int ingresa = 0;
    char caracter;
    int i = 0;
    
    do {
        i = 0;
        system("cls");
        printf("\n\t\t\tINICIO DE SESION\n");
        printf("\t\t\t---------------\n");
        printf("\n\tUSUARIO: ");
        gets(usuario);
        printf("\tCLAVE: ");
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
        printf("\n\tBienvenido al Sistema\n");
        
    } else {
        printf("\n\tHa sobrepasado el numero maximo de intentos permitidos\n");
    }

    return 0;
}
