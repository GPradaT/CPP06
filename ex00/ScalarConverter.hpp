#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <cctype>
#include "myException.hpp"

#define CHAR "char: '"

void	toInt(const std::string &param);
void	toChar(const std::string &param);
/*float	toFloat(std::string &param);
double	toDouble(std::string &param);
*/
class	Error;

class	ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter	&operator=(const ScalarConverter &src);
		ScalarConverter(const ScalarConverter &src);

	public:
		static void	convert(const std::string &param);
};


#endif
