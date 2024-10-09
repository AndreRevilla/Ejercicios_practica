#include <iostream>
using namespace std;

// a = 97
// z = 122
// A = 65
// Z = 90

int cantidadLetras(string prueba){
    int cantidad{0};
    for (char item : prueba){
        int numeroAscci = static_cast<int>(item);
        if ((numeroAscci >= 65 && numeroAscci <= 90) || (numeroAscci >= 97 && numeroAscci <= 122)){
            cantidad++;
        }
    }
    return cantidad;
}

int main(){
    string prueba = "qwert12345werty23456ertyu";
    cout<<cantidadLetras(prueba);
}