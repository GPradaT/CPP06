#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>

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
