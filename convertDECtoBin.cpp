/*Copyright (C) 2022-2023 Boyzo Ramirez Carlos|©-Archivo Historico Digitalizado Charlie Ramirez Animation Studios de Mexico -LidiaElectric
UNIVERSIDAD NACIONAL AUTONOMA DE MEXICO-FACULTAD DE ESTUDIOS SUPERIORES ARAGON-INGENIERIA ELECTRICA ELECTRONICA.
Conversor de numero Decimal a Binario Basico, Version A: 2023-11-24T08:10:35
CODIGO BAJO "LICENCIA MIT". PARA CODIGO ABIERTO (OPEN SOURCE  https://opensource.org/licenses/MIT).
convertDECtoBin.cpp
Created: 2022-04-04 22:48:29
Author : CharlieUSTCN1*/
#include<stdio.h>
main()
{
	int e,c,i,j,r[50],b[9];
	float d,f;
	printf("\nPrograma que convierte un dec a bin");
	printf("\nDame num DEC:  ");
	scanf("%f",&d);
	e=d;
	f=d-e;
	i=0;
	while(e!=0)
	{
		c=e/2;
		i=i+1;
		r[i]=e-2*c;
		e=c;
	}
	for(j=1;j<=8;j=j+1)
	{
		f=f*2;
		if(f>=1.0)
		{
			f=f-1;
			b[j]=1;
		}
		else
		b[j]=0;
	}
	printf("\nElnumero decimal es:");
	printf("\n%f ",d);
	printf("\nSu binario es:");
	{for(j=i;j>=1;j=j-1);
	printf(" %i",r[j]);
	}
	printf(" .");
	
	{
	for(j=1;j<=8;j=j+1)
	printf(" %i",b[j]);
}
}

