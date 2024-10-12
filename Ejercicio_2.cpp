#include <iostream>
using namespace std;
#define ascci_a 97
#define ascci_z 122
#define ascci_A 65
#define ascci_Z 90

int qty_letter(std::string text){
    int qty{0};
    for (char letter : text){
        int ascci_number = static_cast<int>(letter);
        if (
            (ascci_number >= ascci_A && ascci_number <= ascci_Z) || 
            (ascci_number >= ascci_a && ascci_number <= ascci_z)  
        ){
            qty++;
        }
    }
    return qty;
}

int main(){
    std::string text = "qwert12345werty23456ertyu";
    cout<<qty_letter(text);
}