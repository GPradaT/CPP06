/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:59 by gprada-t          #+#    #+#             */
/*   Updated: 2024/08/06 12:22:31 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>

#include <stdint.h>
/*
 * DYNAMIC_CASTS
 *
 */

typedef struct Data
{
	int data1;
	char data2;
	char str[8] = "strings";
} Data;

class	parent {};
class	child1 : public parent {public: Data *data;};

int	main( void )
{
	Data	*test;
	test->data1 = 10;
	test->data2 = '*';

	uintptr_t serialized = reinterpret_cast<uintptr_t>(test);
	Data      *desserialized = reinterpret_cast<Data *>(serialized);
	std::cout << test->data1 << std::endl;
	std::cout << test->data2 << std::endl;
	std::cout << test->str << std::endl;
	std::cout << serialized << std::endl;
	std::cout << desserialized->data1 << std::endl;
	std::cout << desserialized->data2 << std::endl;
	std::cout << desserialized->str[1] << std::endl;

	/*
	Data *c = &test;
	parent *b = reinterpret_cast<child1 *>(c);
	uintptr_t testing = 12344112341234234;

	std::cout << typeid(*c) << std::endl;

	std::cout << sizeof(testing) << std::endl;
	std::cout << testing << std::endl;
	std::cout << sizeof(Data) << std::endl;
	std::cout << test.data1 << test.data2 << test.data3 << std::endl;
	std::cout << sizeof(b) << std::endl;
	std::cout << testing << std::endl;
	testing = reinterpret_cast<uintptr_t>(c);
	std::cout << testing << std::endl;
	std::cout << sizeof(&testing) << std::endl;
	std::cout << testing << std::endl;
	std::cout << &(*b) << std::endl;
	testing = dynamic_cast<Data *>(static_cast<uintptr_t>(21474836495));
	std::cout << testing << std::endl;
	std::cout << sizeof(&testing) << std::endl;
	std::cout << testing << std::endl;
	std::cout << &(*b) << std::endl;*/
}

/*
 *
 * EXCEPTIONS
 *
 *
class error: public std::exception
{
	public:
		virtual const char* what() const throw(){
			return "char: Impossible";
		};
};

int	toInt(std::string param)
{
	int	res = static_cast<int>(std::strtol(param.c_str(), NULL, 10));
	return res;
}

char	tryCastChar(std::string param)
{
	if (param.length() > 1 && std::isprint(param[0])) 
	{
		std::cout << "'" << param[0] << "'" << std::endl;
		return (static_cast<char>(std::strtol(param.c_str(), NULL, 10)));
	}
	throw error();
}

char	toChar(std::string param)
{
	char	res;
	try{
		tryCastChar(param);
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return res;
}

	#include <iostream>
	#include <iomanip>
int	main()
{
	{

	float result = 0.0f; // Asume que tienes algún valor para result

	std::cout << std::fixed; // Fijar el formato del flujo a punto fijo

	if (result == 0) {
		std::cout << std::setprecision(1) << result;
	} 
	else {
		std::cout << result;
	}
	std::cout << "f" << std::endl;
	}

	
	std::string toCast = "330";
	int	a = toInt(toCast);
	float	xD = 42.42;

	std::cout << "maybe this is a float: " << 42.42f << std::endl;
	std::cout << "maybe this is a float: " << xD << std::endl;
	std::cout << a << std::endl;
	std::cout << static_cast<double>(a) << std::endl;
	std::cout << static_cast<float>(a) << std::endl;
	std::cout << static_cast<char>(a) << std::endl;
	std::cout << toCast << std::endl;
	std::cout << toInt(toCast) << std::endl;
	std::cout << toChar(toCast) << std::endl;
	return 0;
}*/
