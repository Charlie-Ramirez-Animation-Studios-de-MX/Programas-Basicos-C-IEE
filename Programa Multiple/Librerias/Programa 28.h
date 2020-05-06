#include <stdio.h>
#include <iostream>

using namespace std;
int a, b, c;

programa28(){
	cout<<"CONSTRUYA UN PROGRAMA TAL QUE DADO COMO DATOS DE ENTRADA TRES NUMEROS ENTEROS, DETERMINE SI LOS MISMOS ESTAN EN ORDEN CRECIENTE ";
	cout<<"Digite el primer numero: "; cin>>a;
	cout<<"Digite el segundo numero:"; cin>>b;
	cout<<"Digite el tercer numero: "; cin>>c; 
	if(a<b){
		if(b<c){
			cout<<"\nLos numeros estan en orden creciente"; 
		}
		else {
			cout<<"\nLos numeros no estan en orden creciente";
		}
	}
	else{
		cout<<"\nLos numeros no estan en orden creciente"; 
	}
	system(pause);
	return 0;
}
