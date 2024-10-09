#include <iostream>
#include <vector>
using namespace std;

void Convertir_A_Cuadrados(vector<int> &num, int size){
	for (int &item : num){
		item *= item;
	}
}

int main() {
	vector<int> num(10);
	
	for(int i{0};i<10;i++){
		num[i]=i;
	}
	
	Convertir_A_Cuadrados(num,10);
	
	for(int i{0};i<10;i++){
		cout<<num[i]<<" , ";
	}
	
	return 0;
}
