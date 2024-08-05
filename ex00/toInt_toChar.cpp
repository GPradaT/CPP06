#include "ScalarConverter.hpp"


static void	tryCastChar(const std::string param)
{
	const char	*c_str = param.c_str();
	char	*endptr;
	double check = std::strtod(c_str, &endptr);

	if ((check < CHAR_MAX && check > CHAR_MIN) || 
		!(std::isinf(check) || std::isnan(static_cast<float>(check))))
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
	const char	*c_str = param.c_str();
	char	*endptr;
	double bigInt = std::strtod(c_str, &endptr);

	if ((bigInt < INT_MAX && bigInt > INT_MIN) ||
		!(std::isinf(bigInt) || std::isnan(static_cast<float>(bigInt))))
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
