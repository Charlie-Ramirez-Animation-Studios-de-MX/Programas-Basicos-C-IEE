#include <stdio.h>
#include <iostream>

using namespace std;

float com, pa;

int main(){
	cout<<"Digite la cantidad de compra: "; cin>>com;
	if(com<500){
		pa=com;
	}
	else{
		if(com<=100){
			pa=com-(com*0.05);
		}
		else{
			if(com<=7000){
				pa=com-(com*0.11);
			}
			else{
				if(com<=15000){
					pa=com-(com*0.18);
				}
				else{
					pa=com-(com*0.25);
				}
			}
		}
	}
    cout<<"\nNeto a pagar: "<<pa;
	return 0;
}
