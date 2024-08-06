#include "Serializer.hpp"

int	main( void )
{
	Data	*data = new Data;


	data->myNum = 32452;
	data->myChar = 52;
	data->myFloat = 123.001e4f;
	data->myDouble = 12341234123.12341;
	data->myLInt_ptr = 0;
	data->myULInt = 234234;
	data->myUintPtr_T_ptr = NULL;
	data->myUint64_T = 234523;
	data->myLDouble = -00000.3231;

	uintptr_t ptr;


	std::cout << "==========================" << std::endl;
	std::cout << "=function return==========" << std::endl;
	std::cout << Serializer::serialize(data) << std::endl;
	std::cout << (ptr = Serializer::serialize(data)) << std::endl;
	Data	*new_data = Serializer::deserialize(ptr);
	std::cout << new_data << std::endl;
	std::cout << "==========================" << std::endl;
	std::cout << "=ptr value================" << std::endl;
	ptr = Serializer::serialize(data);
	std::cout << "==========================" << std::endl;
	std::cout << "=deserialize->myNum value=" << std::endl;
	std::cout << Serializer::deserialize(ptr)->myNum << std::endl;
	std::cout << new_data->myNum << std::endl;
	std::cout << "==========================" << std::endl;
	std::cout << Serializer::deserialize(ptr)->myChar << std::endl;
	std::cout << new_data->myChar << std::endl;
	std::cout << "==========================" << std::endl;
	std::cout << Serializer::deserialize(ptr)->myFloat << std::endl;
	std::cout << new_data->myFloat << std::endl;
	std::cout << "==========================" << std::endl;
	std::cout << Serializer::deserialize(ptr)->myDouble << std::endl;
	std::cout << new_data->myDouble << std::endl;
	std::cout << "==========================" << std::endl;
	std::cout << Serializer::deserialize(ptr)->myLInt_ptr << std::endl;
	std::cout << new_data->myLInt_ptr << std::endl;
	std::cout << "==========================" << std::endl;
	std::cout << Serializer::deserialize(ptr)->myULInt << std::endl;
	std::cout << new_data->myULInt << std::endl;
	std::cout << "==========================" << std::endl;
	std::cout << Serializer::deserialize(ptr)->myUintPtr_T_ptr << std::endl;
	std::cout << new_data->myUintPtr_T_ptr << std::endl;
	std::cout << "==========================" << std::endl;
	std::cout << Serializer::deserialize(ptr)->myUint64_T << std::endl;
	std::cout << new_data->myUint64_T << std::endl;
	std::cout << "==========================" << std::endl;
	std::cout << Serializer::deserialize(ptr)->myLDouble << std::endl;
	std::cout << new_data->myLDouble << std::endl;
	std::cout << "==========================" << std::endl;
	return 0;
}

