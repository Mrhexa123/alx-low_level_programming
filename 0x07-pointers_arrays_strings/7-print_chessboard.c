#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prints the chesssboard
 *
 * @a: 2d array to containing chars
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
