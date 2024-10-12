#include <iostream>
#include <vector>
#define array_size 10

void convert_to_squares(std::vector<int> &numbers){
	for (int &number : numbers){
		number *= number;
	}
}

int main() {
	std::vector<int> num(array_size);
	for(int index{0};index<array_size;++index){
		num[index]=index;
	}
	convert_to_squares(num);
	for(int index{0};index<array_size;++index){
		cout<<num[index]<<" , ";
	}
	return true;
}
