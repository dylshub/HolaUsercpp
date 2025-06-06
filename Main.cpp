#include <iostream>

using namespace std;
int edad;

int main(){
    string user;
    
    cout<<"Ingrese su nombre "<<endl;

    cin>>user;

    cout<<"Ingrese su edad "<<endl;

    cin>>edad;
    
    if (user != "" || user != " "){
        cout<<"Hola "<<user<<endl;
    }else{
        cout <<"HOLA MUNDO"<<endl;
        cout<<"Tu tienes "<<edad<<" años";
    }

}
