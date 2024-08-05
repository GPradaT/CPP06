#include "ScalarConverter.hpp"
#define SEPARATOR "========================================================="
int main( void )
{
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("4342.34242f");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("42.34242f");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("122");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("42.02f");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("000");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("32");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("nanf");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("inff");
	std::cout << SEPARATOR <<std::endl;
	return 0;
}
