#include "main.h"

/**
  * sst - fills memory with a constant byte
  * @a: the value to print
  * Return: numbers of characters printed
  */
int sst(va_list a)
{
	char *st = va_arg(a, char *), *p;
	int i, j, c = 0;
	unsigned int hexa;

	if (st == NULL)
		st = "(null)";

	for (i = 0; st[i] != '\0'; i++)
		if ((st[i] > 0 && st[i] < 32) || st[i] >= 127)
			c += 3;
	p = malloc(i + c);
	if (p == NULL)
		return (0);
	for (i = 0, j = 0; st[i] != '\0'; i++, j++)
	{
		if ((st[i] > 0 && st[i] < 32) || st[i] >= 127)
		{
			p[j++] = '\\';
			p[j++] = 'x';
			hexa = st[i] % 16;
			if (hexa > 9)
				p[j + 1] = hexa - 10 + 65;
			else
				p[j + 1] = hexa + 48;

			hexa = (st[i] / 16) % 16;
			if (hexa > 9)
				p[j] = hexa - 10 + 65;
			else
				p[j] = hexa + 48;
			j += 1;
		}
		else
			p[j] = st[i];
	}

	return (_write(1, p, i + c));
}
