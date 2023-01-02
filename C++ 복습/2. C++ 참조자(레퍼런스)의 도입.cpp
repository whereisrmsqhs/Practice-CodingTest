#include <iostream>

int main(){
	int a = 3;
	int& another_a = a;
	
	another_a = 5;
	std::cout << "a: " << &a << std::endl;
	std::cout << "another_a : " << &another_a << std::endl;
	
	int* b = &a;
	int*& another_b = b;
	
	std::cout << "b : " << b << std::endl;
	std::cout << "*b : " << *b << std::endl;
	std::cout << "another_b : " << another_b << std::endl;
	std::cout << "*another_b : " << *another_b << std::endl;	
	
	int arr[3] = {1, 2, 3};
	int(&ref)[3] = arr;
	
	ref[0] = 2;
	ref[1] = 3;
	ref[2] = 1;
	
	std::cout << arr[0] << arr[1] << arr[2] << std::endl;
	
	return 0;
}
