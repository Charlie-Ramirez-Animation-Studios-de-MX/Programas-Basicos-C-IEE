#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
int saldo_inicial = 1000;
int saldo, reintegro, opc, agregar, d;


int main(int argc, char** argv) {
	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	system("color 02");
	in:
		system("cls");
		cout << "\t Bienvenido a su cajero virtual" << endl;
		cout << "Escoja una opcion" << endl;
		cout << "1. Ingreso en cuenta" << endl;
		cout << "2. Reintegro" << endl;
		cout << "3. Ver saldo de cuenta" << endl;
		cout << "0. Salir" << endl;
		cin >> opc;
		system("cls");
		
		switch(opc){
			case 1:
				cout << "\t Ingrese la cantidad a depositar" << endl;
				cin >> agregar;
				saldo = saldo_inicial + agregar;
				cout << "Cantidad disponible en cuenta: " << saldo << endl;
				system("pause");
				system("cls");
				cout << "Desea realizar otra operacion?" << endl;
				cout << "1.Si " << "2. No" << endl;
				cin >> d;
				if(d == 1){
					goto in;
					system("cls");
				}else{
					system("cls");
					goto end;
				}
			break;
			
			case 2:
				ri:
				cout << "\t Ingrese la cantidad a retirar" << endl;
				cin >> reintegro;
				if(reintegro > 1000){
					cout << "La cantidad digitada es mayor que 1000, digite de nuevo la cantidad" << endl;
					system("pause");
					system("cls");
					goto ri;
				}
				else{
					saldo = saldo_inicial - reintegro;
					cout << "Cantidad disponible en cuenta: " << saldo << endl;
					system("pause");
					system("cls");
					cout << "Desea realizar otra operacion?" << endl;
					cout << "1.Si " << "2. No" << endl;
					cin >> d;
					if(d == 1){
						goto in;
						system("cls");
					}else{
						system("cls");
						goto end;
					}
				}
			break;
				
			case 3:
				cout << "\t La cantidad disponible en cuenta es de: " << saldo_inicial << endl;
				system("pause");
				system("cls");
				cout << "Desea realizar otra operacion?" << endl;
				cout << "1.Si " << "2. No" << endl;
				cin >> d;
				if(d == 1){
					goto in;
					system("cls");
				}else{
					system("cls");
					goto end;
				}
			break;
			
			case 0:
				end:
					cout << "\t Gracias por usar nuestro cajero virtual" << endl;
			break;
			
			default:
				cout << "Lo sentimos, opcion invalida, intentelo de nuevo" << endl;
				system("pause");
				system("cls");
				goto in;
			break;
		}
		cin.get();
		return 0;
}
