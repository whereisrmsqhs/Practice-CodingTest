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
	
	return 0;
}
