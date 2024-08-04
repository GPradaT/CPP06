#ifndef MYEXCEPTION_HPP
# define MYEXCEPTION_HPP

#include <stdexcept>
#include <exception>
class	Error : public std::exception
{
	public:
		static const char	*errChar() throw();
		static const char	*charZero() throw();
		/*virtual const char	*errInt const throw();
		virtual const char	*errFloat const throw();
		virtual const char	*errDouble const throw();
		virtual const char	*FloatExce const throw();
		virtual const char	*DoubleExce const throw();*/
};

/*
class	CharError : public std::range_error
{
	CharError(void): std::range_error("char error") {};
}

class	ErrInt : public

CharError("char error");
*/
#endif
