#include "myException.hpp"

#define ERR_CHAR "char: Impossible"
#define CHAR_ZERO "char: Non displayable"
#define ERR_INT "int: Impossible"
#define ERR_FLOAT "float: Impossible"
#define ERR_DOUBLE "double: Impossible"

const char	*Error::errChar() throw()
{
	return ERR_CHAR;
}

const char	*Error::charZero() throw()
{
	return CHAR_ZERO;
}

const char	*Error::errInt() throw()
{
	return ERR_INT;
}

const char	*Error::errFloat() throw()
{
	return ERR_FLOAT;
}

const char	*Error::errDouble() throw()
{
	return ERR_DOUBLE;
}
