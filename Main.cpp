#include <iostream>

using namespace std;

int main(){
    string user;
    
    cout<<"Ingrese su nombre "<<endl;

    cin>>user;
    do{

    
    if (user != "" || user != " "){
        cout<<"Hola "<<user<<"Bienvenido al programa uwu"<<endl;
    }else{
        cout<<"porfavor ingrese su nombre de usuario"<<endl;
    }
    }while(user == "" || user == " ")

    
}
