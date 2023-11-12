#include "Data.hpp"

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

int	main()
{
	Data	hello;
	hello.a = 1;
	std::cout << hello.a << std::endl;

	uintptr_t	hello_serialized = serialize(&hello);
	Data		*hello_addr = deserialize(hello_serialized);
	std::cout << hello.a << std::endl;

	std::cout << "test successfully " << (hello_addr == &hello ? "passed" : "failed") << std::endl;
}