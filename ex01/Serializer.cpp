#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::~Serializer(){}

Serializer::Serializer(const Serializer &src){(void)src;}

void	Serializer::operator=(const Serializer &src){(void)src;}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data		*Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
