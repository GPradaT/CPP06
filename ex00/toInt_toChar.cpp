#include "ScalarConverter.hpp"


static void	tryCastChar(const std::string param)
{
	int check = static_cast<int>(std::strtol(param.c_str(), NULL, 10));

	if (check < CHAR_MAX && check > CHAR_MIN)
	{
		if (check == 0)
			throw Error::charZero();
		if (std::isprint(check))
			std::cout << CHAR << static_cast<char>(check) << "'" << std::endl;
		else
			throw Error::errChar();
	}
	else
		throw Error::errChar();
}

void	ScalarConverter::toChar(const std::string &param)
{
	try
	{
		tryCastChar(param);
	} catch (const char *error) {
		std::cout << error << std::endl;	
	}
}

static void	tryCastInt(const std::string param)
{
	long int bigInt = std::strtol(param.c_str(), NULL, 10);

	if ((bigInt < INT_MAX && bigInt > INT_MIN) && bigInt != 0)
		std::cout << INT << static_cast<int>(bigInt) << std::endl;
	else
		throw Error::errInt();
}

void	ScalarConverter::toInt(const std::string &param)
{
	try
	{
		tryCastInt(param);
	} catch (const char *error) {
		std::cout << error << std::endl;
	}
}
