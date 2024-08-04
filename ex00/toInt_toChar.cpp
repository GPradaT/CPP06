#include "ScalarConverter.hpp"

void	toInt(const std::string &param)
{
	long int	result;

	result = std::strtol(param.c_str(), NULL, 10);
	if (result > INT_MAX || result < INT_MIN)
		throw std::underflow_error("shit of error");
	//return static_cast<int>(result);
}

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

void	toChar(const std::string &param)
{
	try
	{
		tryCastChar(param);
	} catch (const char *error) {
		std::cout << error << std::endl;	
	}
}
