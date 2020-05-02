//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 08:23 p. m. 21/10/2019
//Calculadora Division a 3 Decimales
#include<stdio.h>
#include<conio.h>
float num1,num2,division;
main()
{
	printf("Ingresa primer numero:  ");
	scanf("%f",&num1);
		printf("Ingresa Segundo numero:  ");
		scanf("%f",&num2);
		division=(num1/num2);
		printf("Tu resultado (a 3 decimales) es: %.3f",division);
		getch();
	
}
