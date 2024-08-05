#include "ScalarConverter.hpp"
#include <cfloat>

static bool	param_excepts(double num)
{
	return (std::isinf(num) || std::isnan(static_cast<float>(num)));
}

static void	tryCastFloat(const std::string param)
{
	const char	*c_str = param.c_str();
	char		*endptr;
	float	result = static_cast<float>(std::strtod(c_str, &endptr));

	if (result == 0)
		std::cout << std::fixed << std::setprecision(1);
	if (((result < FLT_MAX && result > FLT_MIN) || result == 0) 
			|| (param_excepts(static_cast<double>(result)) && param.length() <= 4))
		std::cout << FLOAT << result << "f" << std::endl;
	else
		throw Error::errFloat();
}

void		ScalarConverter::toFloat(const std::string &param)
{
	try
	{
		tryCastFloat(param);
	} catch (const char *error) {
		std::cout << error << std::endl;
	}
}


static void	tryCastDouble(const std::string param)
{
	const char	*c_str = param.c_str();
	char		*endptr;
	double	result = static_cast<double>(std::strtod(c_str, &endptr));

	if (((result < DBL_MAX && result > DBL_MIN) || result == 0)
			|| (param_excepts(result) && param.length() <= 4))
		std::cout << DOUBLE << result << std::endl;
	else
		throw Error::errDouble();
}

void		ScalarConverter::toDouble(const std::string &param)
{
	try
	{
		tryCastDouble(param);
	} catch (const char *error) {
		std::cout << error << std::endl;
	}
}
