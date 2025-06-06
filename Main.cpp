#include <iostream>

using namespace std;

int main(){
    string user;
    int edad;
    
    cout<<"Ingrese su nombre "<<endl;

    cin>>user;

    cout<<"Ingrese su edad: "<< endl;
    cin>>edad;
    if (edad >=18){
        cout<<"Usted es mayor de edad";
    } else {
        cout<<"Usted es menor de edad";
    }
    cout<<"Usted se llama: "<< user;

}
