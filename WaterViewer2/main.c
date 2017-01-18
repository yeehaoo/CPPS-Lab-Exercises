#include <stdio.h>
#include <conio.h>
void showMenu();
void average();
void waterConsumption();
void averageDifference();
void quarterlyTotal();
void lowestConsumption();
void fiveRoomConsumption();

void main(void) {
	char menuSelection;
	do
	{
		showMenu();
		menuSelection = _getch();
		switch (menuSelection) {
		case 'a':
		case 'A':
			average();
			break; 
		case 'b':
		case 'B':
			waterConsumption();
			break;
		case 'c':
		case 'C':
			averageDifference();
			break;
		case 'd':
		case 'D':
			quarterlyTotal();
			break;
		case 'e':
		case 'E':
			lowestConsumption();
			break;
		case 'f':
		case 'F':
			fiveRoomConsumption();
			break;
		case 'q':
		case 'Q':
			menuSelection = 'Q';
			break;
		default:
			puts("You have entered an invalid selection. Please try again.\n");
			break;
		}//switch
	} while (menuSelection!='Q');//do()
}//main()
