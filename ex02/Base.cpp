#include "Base.hpp"

Base::~Base(){}

Base	*generate( void )
{
	int i = (rand() * 1.0 / RAND_MAX * 3) + 1;
	if ( i == 3 )
		return new A();
	else if ( i == 2 )
		return new B();
	else
		return new C();
}

void	identify(Base *p)
{
	try
	{
		A *_A = dynamic_cast<A*>(p);
		B *_B = dynamic_cast<B*>(p);
		C *_C = dynamic_cast<C*>(p);
		if (_A)
			std::cout << "Pointer identifier--> A" << std::endl;
		if (_B)
			std::cout << "Pointer identifier--> B" << std::endl;
		if (_C)
			std::cout << "Pointer identifier--> C" << std::endl;
	} catch (...) {
	}
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Reference identifier A" << std::endl;
	} catch (...){
		try{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "Reference identifier B" << std::endl;
		} catch (...){
			try {
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "Reference identifier C" << std::endl;
			} catch (...){}
		}
	}
}
