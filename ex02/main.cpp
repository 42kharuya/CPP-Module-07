#include "Array.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

#define MAX_VAL 10

int main() {

	{
		std::cout << "\n////// Normal Int, Address Check //////" << std::endl;

		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; ++i) {
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}

		for (int i = 0; i < MAX_VAL; ++i)
			std::cout << numbers[i] << std::endl;

		{
			Array<int> tmp1 = numbers;
			Array<int> tmp2(numbers);

			std::cout << std::endl;
			std::cout << "number address: " << &numbers[0] << std::endl;
			std::cout << "tmp1 address: " << &tmp1[0] << std::endl;
			std::cout << "number address: " << &tmp2[0] << std::endl;
		}

		for (int i = 0; i < MAX_VAL; i++) {
			if (mirror[i] != numbers[i]) {
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}

		delete[] mirror;
	}

	{
		std::cout << "\n////// Const Error, Index Error //////" << std::endl;

		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; ++i) {
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}

		for (int i = 0; i < MAX_VAL; ++i)
			std::cout << numbers[i] << std::endl;

		std::cout << std::endl;
		const Array<int> constNumbers = numbers;

		try {
			numbers[-2] = 0;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		try {
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
			numbers[i] = rand();
		for (int i = 0; i < MAX_VAL; ++i)
			std::cout << numbers[i] << std::endl;

		delete[] mirror;
	}
}
