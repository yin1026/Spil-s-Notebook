#include "Graphics.h"
int main(void)
{
	SETRESOLUTION
	Content_Board();
	cursor_view(0);

	//test 
	settextcolor("BLUE");
	gotoxytext( 9, 3, "■");
	gotoxytext(19, 3, "■");
	gotoxytext(29, 3, "■");

	settextcolor("YELLOW");
	gotoxytext( 9, 11, "■");
	gotoxytext(19, 11, "■");
	gotoxytext(29, 11, "■");
	
	_getch();

	return 0;
}
