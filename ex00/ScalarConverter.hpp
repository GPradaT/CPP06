#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <stdexcept>
# include <cstdlib>
# include <cctype>
# include <climits>
# include <cmath>
# include <cfloat>
# include "myException.hpp"

# define CHAR "char: '"
# define INT "int: "
# define FLOAT "float: "
# define DOUBLE "double: "


class	Error;

class	ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter	&operator=(const ScalarConverter &src);
		ScalarConverter(const ScalarConverter &src);

		static void	toInt(const std::string &param);
		static void	toChar(const std::string &param);
		static void	toFloat(const std::string &param);
		static void	toDouble(const std::string &param);

	public:
		static void	convert(const std::string &param);
};


#endif
