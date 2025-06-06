
#include <iostream>

using namespace std;

int main(){
    string nombre;
    int opcion;
    
    cout << "Hola! Ingresa tu nombre: ";
    getline(cin, nombre);
    
    
    if (nombre == "" || nombre == " "){
        cout << "HOLA MUNDO" << endl;
        return 0;
    }
    
    cout << "\nHola " << nombre << "!" << endl;
    
    
    cout << "\nQue quieres hacer?" << endl;
    cout << "1 - Ver cuantas letras tiene mi nombre" << endl;
    cout << "2 - Ver mi nombre al reves" << endl;
    cout << "3 - Salir" << endl;
    cout << "Elige: ";
    cin >> opcion;
    
    if(opcion == 1){
        cout << "\nTu nombre tiene " << nombre.length() << " letras" << endl;
        
        
        int vocales = 0;
        for(int i = 0; i < nombre.length(); i++){
            char letra = nombre[i];
            if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
               letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
                vocales++;
            }
        }
        cout << "Y tiene " << vocales << " vocales" << endl;
    }
    else if(opcion == 2){
        cout << "\nTu nombre al reves: ";
        for(int i = nombre.length()-1; i >= 0; i--){
            cout << nombre[i];
        }
        cout << endl;
    }
    else if(opcion == 3){
        cout << "\nAdiós " << nombre << "!" << endl;
    }
    else{
        cout << "\nOpcion incorrecta" << endl;
    }
    
    return 0;
}
