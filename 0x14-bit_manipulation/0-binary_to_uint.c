#include "main.h"

/**
* binary_to_uint - function that converts a binary to an unsigned int
*@b: string of the binary number
*Return: the value of the conversion
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i, j;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i + 1] != '\0')
		i++;

	j = 1;
	num = 0;
	while (i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		num += (b[i] - '0') * j;
		j *= 2;
		i--;
	}
	return (num);
}
