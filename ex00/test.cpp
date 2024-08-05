#include <climits>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include "ScalarConverter.hpp"    
#define SEPARATOR "========================================================="


int main()
{
	for (float i = 0; i < 100; i++)
	{
		std::cout << SEPARATOR <<std::endl;
		ScalarConverter::convert(std::to_string(i));
	}
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("4342.34242f");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("42.34242f");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("122");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("42.02f");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("000");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("32");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("nanf");
	std::cout << SEPARATOR <<std::endl;
	ScalarConverter::convert("inff");
	std::cout << SEPARATOR <<std::endl;
	
	std::cout << std::left;
	const int w = 14;
	# define COUT(x) std::cout << std::setw(w) << #x << " = " << x << '\n'
	COUT( CHAR_BIT       );
	COUT( MB_LEN_MAX     );
	COUT( CHAR_MIN       );
	COUT( CHAR_MAX       );
	COUT( SCHAR_MIN      );
	COUT( SHRT_MIN       );
	COUT( CHAR_BIT       );
	COUT( MB_LEN_MAX     );
	COUT( CHAR_MIN       );
	COUT( CHAR_MAX       );
	COUT( SCHAR_MIN      );
	COUT( SHRT_MIN       );
	COUT( INT_MIN        );
	COUT( LONG_MIN       );
	COUT( LLONG_MIN      );
	COUT( SCHAR_MAX      );
	COUT( SHRT_MAX       );
	COUT( INT_MAX        );
	COUT( LONG_MAX       );
	COUT( LLONG_MAX      );
	COUT( UCHAR_MAX      );
	COUT( USHRT_MAX      );
	COUT( UINT_MAX       );
	COUT( ULONG_MAX      );
	COUT( ULLONG_MAX     );
	return 0;
}
