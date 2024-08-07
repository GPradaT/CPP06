#include "Base.hpp"

int	main( void )
{
	Base *fail = NULL;
	identify(fail);
	
	Base	*testA = new A();
	identify(testA);
	
	Base	*testB = new B();
	identify(testB);
	
	Base	*testC = new C();
	identify(testC);
	
	Base	*random;

	for (int k = 0; k < 100; k++){
		random = generate();
		identify(random);
		identify(*random);
		delete random;
	}
	
	std::cout << "=============" << std::endl;

	A	testA1;
	B	testB1;
	C	testC1;
		
	identify(testA1);
	identify(testB1);
	identify(testC1);

	delete testA;
	delete testB;
	delete testC;
	

	return 0;
}
