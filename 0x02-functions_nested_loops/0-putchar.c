#include "holberton.h"

/**
  * main - program that prints putchar
  * Return: Always 0 (Success)
  */
int main(void)
{
	char *sh =   "Holberton";

	while (*sh)
	{
	_putchar(*sh);
	sh++;
	}
	_putchar('\n');
	return (0);
}
