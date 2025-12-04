#include <iostream>
#include <string>

int main() {
	std::string *a = new std::string[0];

	std::cout << a[0] << std::endl;
	delete[] a;
}
