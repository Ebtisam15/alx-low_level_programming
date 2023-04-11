#include "main.h"
/**
	 * clear_bit -will set the value of the given bit to 0
	 * @n: is the pointer to the number that will change
	 * @index: is the index of the bit to clear
	 *
	 * Return: 1 for success, -1 for failure
	 */
	int clear_bit(unsigned long int *n, unsigned int index)
	{
	  if (index > 63)
	    return (-1);
	
	    *n = (~(1UL << index) & *n);
	    return (1);
	}

