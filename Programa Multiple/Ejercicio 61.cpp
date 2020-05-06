#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;
int n, i, vec[500], repet;

int main(){
	cout<<"Ingrese numero de elementos del arreglo: "; cin>>n;
	cout<<"\n";
	if((1<=n)||(n<=500)){
		for(i=1;i<=n;i++){
			cout<<i<<") Ingrese valor: "; cin>>vec[i];
		}
		system("cls");
		cout<<"Lista de numeros sin repeticiones : "<<"\n";
		i=1;
		while(i<=n){
			cout<<"\t"<<vec[i]<<endl;
			repet=vec[i];
			while((i<=n)&&(repet==vec[i])){
				i++;
			}
		}
	}
	else{
		cout<<"\nEl numero de elementos del arreglo es incorrecto";
	}
	getch();
	return 0;
	
}
