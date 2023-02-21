#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
int h, i, j;
if (n >= 0 && n <= 15)
{
for (h = 0; h <= n; h++)
{
for (i = 0; i <= n; i++)
{
j = i * h;
if (i == 0)
{
_putchar(j + '0');
}
else if (j < 10 && i != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(j + '0');
}
else if (j >= 10 && j < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
else if (j >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((j / 100) + '0');
_putchar(((j / 10) % 10) + '0');
_putchar((j % 10) + '0');
}
}
_putchar('\n');
}
}
}
