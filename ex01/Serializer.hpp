#pragma once

#include <string>
#include <iostream>
#include <cstdlib>
#include <cfloat>

#include <stdint.h>

typedef struct Data
{
	int			myNum;
	char			myChar;
	float			myFloat;
	double			myDouble;
	long int		*myLInt_ptr;
	unsigned long int	myULInt;
	uintptr_t		*myUintPtr_T_ptr;
	uint64_t		myUint64_T;
	long double		myLDouble;
} Data;

class	Serializer
{
	private:
		Serializer();
		~Serializer();
		Serializer(const Serializer &src);
		void	operator=(const Serializer &src);

	public:
		static uintptr_t	serialize(Data *ptr);
		static Data		*deserialize(uintptr_t raw);
};

