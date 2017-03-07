#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include "CONSTANTDECLARATIONS.h"


// Functions needed for Graphics
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void settextcolor(char *color)
{
	if (strcmp(color, "BLUE") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
	}
	else if (strcmp(color, "RED") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	}
	else if (strcmp(color, "GREEN") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN);
	}
	else if (strcmp(color, "YELLOW") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), YELLOW);
	}
	else if (strcmp(color, "ORANGE") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ORANGE);
	}
	else if (strcmp(color, "WHITE") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	}
	else if (strcmp(color, "PURPLE") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), PURPLE);
	}
	else if (strcmp(color, "STARTCOLOR") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), STARTCOLOR);
	}
	else if (strcmp(color, "NONE") == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf000000| 0x0007);
	}

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void gotoxy(int x, int y) {
	COORD Pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void gotoxytext(int x, int y, char *string) {
	COORD Pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	puts(string);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void gotoxychar(int x, int y, char *letter) {
	COORD Pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	printf("%s", letter);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void gotoxyint(int x, int y, int num) {
	COORD Pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	printf("%d", num);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void cursor_view(char s)      // 0넣으면 숨기기, 1넣으면 보이기
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	ConsoleCursor.bVisible = s;
	ConsoleCursor.dwSize = 2;
	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Content_Board()
{
	gotoxychar(4, 1, "┏━━━━┳━━━━┳━━━━┓");
	for (int y = 2; y < 14; y++)
	{
		if (y == 13)
		{
			gotoxychar(4, 13, "┗━━━━┻━━━━┻━━━━┛");
			break;
		}
		if (y % 4 == 1)
		{
			gotoxytext(4, y, "┣━━━━╋━━━━╋━━━━┫");
			continue;
		}
		gotoxytext(4, y, "┃");
		gotoxytext(34, y, "┃");
	}
	gotoxytext(14, 2, "┃");
	gotoxytext(24, 2, "┃");
	gotoxytext(14, 3, "┃");
	gotoxytext(24, 3, "┃");
	gotoxytext(14, 4, "┃");
	gotoxytext(24, 4, "┃");
	gotoxytext(14, 6, "┃");
	gotoxytext(24, 6, "┃");
	gotoxytext(14, 7, "┃");
	gotoxytext(24, 7, "┃");
	gotoxytext(14, 8, "┃");
	gotoxytext(24, 8, "┃");
	gotoxytext(14, 10, "┃");
	gotoxytext(24, 10, "┃");
	gotoxytext(14, 11, "┃");
	gotoxytext(24, 11, "┃");
	gotoxytext(14, 12, "┃");
	gotoxytext(24, 12, "┃");

	gotoxytext(13, 15,"Tic Tac Toe");
}

