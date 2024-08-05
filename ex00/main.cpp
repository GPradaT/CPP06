#include "ScalarConverter.hpp"

int main( void )
{
	std::cout <<"lllegog"<<std::endl;
	ScalarConverter::convert("4342.34242f");
	ScalarConverter::convert("42.34242f");
	ScalarConverter::convert("122");
	ScalarConverter::convert("42.02f");
	ScalarConverter::convert("000");
	ScalarConverter::convert("32");
	ScalarConverter::convert("nanf");
	ScalarConverter::convert("inff");
	return 0;
}
