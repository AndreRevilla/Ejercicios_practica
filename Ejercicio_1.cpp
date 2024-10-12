#include <iostream>
#define array_size 10
// Cambiar el nombre de esPrimo a is_prime_number
// Agregar una macro del tamanio del array
// Cambiar fors en un ++i
// Cambiar el nombre del i no es coherente
// Variables en ingles

bool is_prime_number(int number){
    if (number<=1){
        return false;
    }
    for (int count{2}; count<number; ++count){
        if (number % count == 0){
            return false;
        }
    }
    return true;
}

int prime_number_qty(int numbers[]){
    int qty{0};    
    for (int index{0}; index<array_size; ++index){
        if (is_prime_number(numbers[index])){
            qty++;
        }
    }
    return qty;
}

int main(**args){
    int numbers[array_size];
    for (int index{0};index<array_size;++index){
        numbers[index]=index;
    }
    int result{prime_number_qty(arr)}
    std::cout<<result;
    return result
}