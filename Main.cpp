#include <iostream>

using namespace std;

int main(){
    string user;
    
    cout<<"Ingrese su nombre "<<endl;

    cin>>user;
    cout<<"BIENVENIDO " << user<<endl;
    if (user != "" || user != " "){
        cout<<"Hola "<<user<<endl;
    }else{
        cout <<"HOLA MUNDO"<<endl;
    }
    cout<<"Gracias por utilizar el programa usuario"<<user<<endl;
        }
