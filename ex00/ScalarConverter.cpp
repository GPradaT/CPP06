#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {(void)src;}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &src)
{
	(void)src;
	return *this;
}

void	ScalarConverter::convert(const std::string &param)
{
	toChar(param);
	toInt(param);
/*	toFloat(param);
	toDouble(param);*/
}
