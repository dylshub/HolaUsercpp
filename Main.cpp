#include <iostream>

using namespace std;

int main(){
    string user;

cout<<"Hola personitas :D"<<endl;
    
    cout<<"Ingrese su nombre "<<endl;

    cin>>user;

    if (user != "" || user != " "){
        cout<<"Hola "<<user<<endl;
    }else{
        cout <<"HOLA MUNDO"<<endl;
    }

}
