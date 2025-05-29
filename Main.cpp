#include <iostream>

using namespace std;

int main(){
    string user;

    do{
    cout<<"Ingrese su nombre "<<endl;

    cin>>user;

    if (user != " " || user != " "){
        cout<<"Hola,  "<<user<<endl;
    }else{
        cout <<"**NO DEJE ESPACIOS VACIOS**"<<endl;
        cout <<"**INTENTE DE NUEVO**"<<endl;
    }
}while(user != " " || user != " ")
    
}
