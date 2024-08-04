#include "ScalarConverter.hpp"

int main( void )
{
	std::cout <<"lllegog"<<std::endl;
	ScalarConverter::convert("43214234242");
	ScalarConverter::convert("122");
	ScalarConverter::convert("42.0f");
	ScalarConverter::convert("000");
	ScalarConverter::convert("32");
	return 0;
}
