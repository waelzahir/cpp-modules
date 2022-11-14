#ifndef ITER_HPP
#define ITER_HPP
#include <stddef.h>
template <typename T>
void	print(T const &  val)
{
	std::cout << val << std::endl; 
}

template <typename	T>
void	iter(T *array, int size, void (*func)(T const &))
{
	for	(int i = 0 ; i < size; i++)
	{
		func(array[i]);
	}
}
#endif