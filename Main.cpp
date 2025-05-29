#include <iostream>

using namespace std;

int main(){
    string user;
    int edad;
    
    do{
        cout<<"Ingrese su nombre "<<endl;
    cin>>user;

    cout<<"Ingrese su edad "<<endl;
    cin>>edad;
    
    if (user != "" || user != " "){
        cout<<"Hola "<<user<<endl;
    }else{
        cout <<"HOLA MUNDO"<<endl;
    }
    }while(true);

}
