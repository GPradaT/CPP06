#include "ScalarConverter.hpp"

int	toInt(const std::string &param)
{
	long int	result;

	result = std::strtol(param.c_str(), NULL, 10);
	return static_cast<int>(result);
}

static void	tryCastChar(const std::string param)
{
	if (param.length() < 4)
	{
		long int check = std::strtod(param.c_str(),param.back());
		if (check == 0)
			throw Error::charZero();
		if (std::isprint(int(check)))
		{
			if (!(std::strtol(param.c_str(), NULL, 10) == 0))
				std::cout << CHAR << "'" << static_cast<char>(std::strtol(param.c_str(), NULL, 10)) << "'" << std::endl;
		}
		else
			throw Error::errChar();
	}
	else
		throw Error::errChar();
}

void	toChar(const std::string param)
{
	try
	{
		tryCastChar(param);
	} catch (const char *error) {
		std::cout << error << std::endl;	
	}
}

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
