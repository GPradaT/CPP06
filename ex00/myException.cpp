#include "myException.hpp"

#define ERR_CHAR "char: Impossible"
#define CHAR_ZERO "char: Non displayable"

const char	*Error::errChar() throw()
{
	return ERR_CHAR;
}

const char	*Error::charZero() throw()
{
	return CHAR_ZERO;
}
