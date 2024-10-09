#include <iostream>
using namespace std;

bool esPrimo(int num){
    if (num<=1){
        return false;
    }

    int i = 2;
    while(i<num){
        if (num % i == 0){
            return false;
        }
        i++;
    }
    return true;
}

int cantidadPrimos(int arr[], int size){
    
    int cantidad{0};
    
    for (int i{0}; i<size; i++){
        if (esPrimo(arr[i])){
            cantidad++;
        }
    }
    return cantidad;
}

int main(){
    int arr[10];

    for (int i{0};i<10;i++){
        arr[i]=i;
    }

    cout<<cantidadPrimos(arr,10);
}