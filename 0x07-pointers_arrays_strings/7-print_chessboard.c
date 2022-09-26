#include "main.h"

/**
 * print_chessboard - board(battlefield)
 * @a: print chess pieces
 * Return: return bunch of stuff/chess crap
 * lets play mate
 */

void print_chessboard(char (*a)[8])
{
	int king;
	int queen;

	for (king = 0; king < 8; king++)
	{
		for (queen = 0; queen < 8; queen++)
		{
			_putchar(a[king][queen]);
		}
		_putchar('\n');
	}
}
