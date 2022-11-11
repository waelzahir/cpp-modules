#ifndef ITER_HPP
#define ITER_HPP
#include <stddef.h>
template <typename	T>
void	iter(T *array, int size, void (*func)(T))
{
	for	(int i = 0 ; i < size; i++)
	{
		(*func)(array[i]);
	}
}
#endif