#include <iostream>

using namespace std;

int main(){
    string user;

    cout<<"--Bienvenido al sistema :D--"<<endl;
    cout<<"Ingrese su nombre "<<endl;

    cin>>user;

    if (user != "" || user != " "){
        cout<<"Hola "<<user<<endl;
    }else{
        cout <<"HOLA MUNDO"<<endl;
    }
cout<<"Que tenga un buen dia!"<<endl;
}
