#include "ScalarConverter.hpp"

int	toInt(const std::string &param)
{
	long int	result;

	result = std::strtol(param);
	return 0;
}

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {(void)src;}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &src)
{
	(void)src;
	return *this;
}

static void	ScalarConverter::convert(const std::string param)
{
	try
	{
		toInt(param);
		toChar(param);
		toFloat(param);
		toDouble(param);
	} catch(std::exce) {}
}
