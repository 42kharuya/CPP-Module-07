#include "iter.hpp"

int main() {

	{
		std::cout << "\n//////// Char Array ////////" << std::endl;
		char test[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

		::iter(test, 10, ::increment<char>);

		std::cout << std::endl;
		::iter(test, 10, ::print<char>);
	}

	{
		std::cout << "\n//////// Int Array ////////" << std::endl;
		int test[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

		::iter(test, 10, ::increment<int>);

		std::cout << std::endl;
		::iter(test, 10, ::print<int>);
	}

	{
		std::cout << "\n//////// Double Array ////////" << std::endl;
		double test[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

		::iter(test, 10, ::increment<double>);

		std::cout << std::endl;
		::iter(test, 10, ::print<double>);
	}

	std::cout << std::endl;
}
