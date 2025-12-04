#include "iter.hpp"

int main() {

	{
		std::cout << "\n//////// String Array ////////" << std::endl;
		std::string test[] = { "aa", "bb" , "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj"};

		::iter(test, 10, ::out);
	}

	{
		std::cout << "\n//////// Int Array ////////" << std::endl;
		int test[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

		::iter(test, 10, ::out);
	}

	{
		std::cout << "\n//////// bool Array ////////" << std::endl;
		bool test[] = {true, false, true, false, true, false, true, false, true, false};

		::iter(test, 10, ::out);
	}

	std::cout << std::endl;
}
