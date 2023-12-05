#include "main.h"

/**
* point - fills memory with a constant byte
* @a: the value to print
* Return: numbers of characters printed
*/
int point(va_list a)
{
	unsigned long num = (unsigned long)va_arg(a, void *), num1 = 0;
	long i, j, cant = 0, hexa = 0;
	char *hexadeci;

	if (num == 0)
	{
		cant = _write(1, "(nil)", 5);
		return (cant);
	}

	num1 = num;
	for (i = 1; num1 / 16 != 0; i++)
		num1 /= 16;

	hexadeci = malloc(sizeof(char) * (i + 3));
	if (hexadeci == NULL)

		return (0);

	hexadeci[0] = '0';
	hexadeci[1] = 'x';
	for (j = 0; j < i; j++)
	{
		hexa = num % 16;
		if (hexa > 9)
			hexadeci[(i + 1) - j] = hexa - 10 + 97;
		else
			hexadeci[(i + 1) - j] = hexa + 48;
		num /= 16;
	}
	hexadeci[j + 2] = '\0';
	cant = _write(1, hexadeci, i + 2);
	free(hexadeci);
	return (cant);
}
