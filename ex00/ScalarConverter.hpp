#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>

int	toInt(std::string param);
char	toChar(std::string param);
float	toFloat(std::string param);
double	toDouble(std::string param);

class	ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter	&operator=(const ScalarConverter &src);
		ScalarConverter(const ScalarConverter &src);

	public:
		static void	convert(const std::string param);
};

#endif
