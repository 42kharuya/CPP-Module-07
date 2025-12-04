#include "whatever.hpp"
#include <iostream>
#include <string>

int main(void) {

	std::cout << "\n--------------- int ---------------" << std::endl;
	int intA = 2;
	int intB = 3;
	::swap(intA, intB);
	std::cout << "intA = " << intA << ", intB = " << intB << std::endl;
	std::cout << "min(intA, intB) = " << ::min(intA, intB) << std::endl;
	std::cout << "max(intA, intB) = " << ::max(intA, intB) << std::endl;

	std::cout << "\n--------------- double ---------------" << std::endl;
	double doubleA = 2.4;
	double doubleB = 2.6;
	::swap(doubleA, doubleB);
	std::cout << "doubleA = " << doubleA << ", doubleB = " << doubleB << std::endl;
	std::cout << "min(doubleA, doubleB) = " << ::min(doubleA, doubleB) << std::endl;
	std::cout << "max(doubleA, doubleB) = " << ::max(doubleA, doubleB) << std::endl;

	std::cout << "\n--------------- float ---------------" << std::endl;
	float floatA = 2.4f;
	float floatB = 2.6f;
	::swap(floatA, floatB);
	std::cout << "floatA = " << floatA << ", floatB = " << floatB << std::endl;
	std::cout << "min(floatA, floatB) = " << ::min(floatA, floatB) << std::endl;
	std::cout << "max(floatA, floatB) = " << ::max(floatA, floatB) << std::endl;

	std::cout << "\n--------------- string ---------------" << std::endl;
	std::string stringA = "chaine1";
	std::string stringB = "chaine2";
	::swap(stringA, stringB);
	std::cout << "stringA = " << stringA << ", stringB = " << stringB << std::endl;
	std::cout << "min(stringA, stringB) = " << ::min(stringA, stringB) << std::endl;
	std::cout << "max(stringA, stringB) = " << ::max(stringA, stringB) << std::endl;

	std::cout << std::endl;
	return 0;
}
