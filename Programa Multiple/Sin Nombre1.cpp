#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string convertir(int a){
    stringstream buf;
    string res;
    buf<<a;
    res=buf.str();
    return res;
}
int main(){
    int num,i,n=4,cont=2;
    string cad = "";
    cout<<"ingrese un numero"<<endl;
    cin>>num;
    if(num>2){
        cad="2 - 3";
        while(cont<num){
            i=2;
            while(i<=n){
                if(i==n){
                    cad=cad+" - "+convertir(n);
                    cont=cont+1;
                }else{
                if(n%i==0){
                    i=n;
                }
                }
                i=i+1;
            }
            n=n+1;
        }
        cout<<cad;
    }else{
    if(num>0){
        if(num==1){
            cout<<"es primo 2";
        }else{
            cout<<"es primo 2, 3";
        }
    }else{
        cout<<"ingrese numeros positivos";
    }
    }
   return 0;
}
