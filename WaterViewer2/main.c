#include <stdio.h>
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
		scanf_s(" %c", &menuSelection);
		fflush(stdin);
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
			printf("You have selected an invalid function. Please try again.\n");
		}//switch
	} while (menuSelection!='Q');//do()
}//main()
