#include <stdio.h>
extern float oneRoom[];
extern float twoRoom[];
extern float threeRoom[];
extern float fourRoom[];
extern float fiveRoom[];

int selectedHousehold = 0;
int x = 0;
float totalConsumption = 0.0;
float averageConsumption = 0.0;
int selectedMonth = 0;

void showMenu(void)
{
	printf("Please select a function, A B C D E F or Q.\n");
	printf("A. Display average water consumption of HDB households for a selected household across 12 months.\n");
	printf("B. Display water consumption of a selected household for a selected monoth.\n");
	printf("C. Display differences between average water consumption and water consumption of each household type for a selected month.\n");
	printf("D. Display quarterly total water consumption of a selected HDB household.\n");
	printf("E. Display the lowest water consumption and its corresponding months and household type from Jan to Dec.\n");
	printf("F. Display the difference between water consumptions of HDB 5-Room in each consecutive month, and highest increase amount and its corresponding month.\n");
	printf("Q. Exit the program.\n\n");
}//showMenu()

void average(void)
{
	
	do {
		printf("Please select the household by entering 1 2 3 4 or 5. Enter 9 to go back to the main menu.");
		scanf_s("%d", &selectedHousehold);
		switch (selectedHousehold) {
		case 1:
			for (x = 0; x < 13; x++) {
				totalConsumption += oneRoom[x];
			}//for()
			averageConsumption = totalConsumption / 12.0;
			printf("The average water consumption for HDB 1-Room is %.2f.\n", averageConsumption);
			break;
		case 2:
			for (x = 0; x < 13; x++) {
				totalConsumption += twoRoom[x];
			}//for()
			averageConsumption = totalConsumption / 12.0;
			printf("The average water consumption for HDB 2-Room is %.2f.\n", averageConsumption);
			break;
		case 3:
			for (x = 0; x < 13; x++) {
				totalConsumption += threeRoom[x];
			}//for()
			averageConsumption = totalConsumption / 12.0;
			printf("The average water consumption for HDB 3-Room is %.2f.\n", averageConsumption);
			break;
		case 4:
			for (x = 0; x < 13; x++) {
				totalConsumption += fourRoom[x];
			}//for()
			averageConsumption = totalConsumption / 12.0;
			printf("The average water consumption for HDB 4-Room is %.2f.\n", averageConsumption);
			break;
		case 5:
			for (x = 0; x < 13; x++) {
				totalConsumption += fiveRoom[x];
			}//for()
			averageConsumption = totalConsumption / 12.0;
			printf("The average water consumption for HDB 5-Room is %.2f.\n", averageConsumption);
			break;
		case 9:
			selectedHousehold = 9;
			break;
		default:
			printf("You have made an invalid selection. Please select the HDB household by entering 1, 2, 3, 4 or 5. Enter 9 to return to the main menu.\n");

		}//switch()
		printf("\n\n");
	} while (selectedHousehold != 9);//do()
}//average()

void waterConsumption(void)
{
	do {
		printf("Please select the household by entering 1, 2, 3, 4 or 5. Enter 9 to return to the main menu.");
		scanf_s("%d", &selectedHousehold);
		switch (selectedHousehold) {
		case 1:
			printf("Please select the month by entering its numerical value (eg. Jan is 01, Feb is 02)");
			scanf_s("%d", &selectedMonth);
			printf("The water consumption of %d-room HDB in the month %d is %.1f.\n\n",selectedHousehold,selectedMonth,oneRoom[selectedMonth-1]);
			break;
		case 2:
			printf("Please select the month by entering its numerical value (eg. Jan is 01, Feb is 02)");
			scanf_s("%d", &selectedMonth);
			printf("The water consumption of %d-room HDB in the month %d is %.1f.\n\n", selectedHousehold, selectedMonth, twoRoom[selectedMonth - 1]);

			break;
		case 3:
			printf("Please select the month by entering its numerical value (eg. Jan is 01, Feb is 02)");
			scanf_s("%d", &selectedMonth);
			printf("The water consumption of %d-room HDB in the month %d is %.1f.\n", selectedHousehold, selectedMonth, threeRoom[selectedMonth - 1]);

			break;
		case 4:
			printf("Please select the month by entering its numerical value (eg. Jan is 01, Feb is 02)");
			scanf_s("%d", &selectedMonth);
			printf("The water consumption of %d-room HDB in the month %d is %.1f.\n\n", selectedHousehold, selectedMonth, fourRoom[selectedMonth - 1]);

			break;
		case 5:
			printf("Please select the month by entering its numerical value (eg. Jan is 01, Feb is 02)");
			scanf_s("%d", &selectedMonth);
			printf("The water consumption of %d-room HDB in the month %d is %.1f.\n\n", selectedHousehold, selectedMonth, fiveRoom[selectedMonth - 1]);

			break;
		case 9:
			selectedHousehold = 9;
			break;
		default:
			printf("You have made an invalid selection. Please select the HDB household by enter 1, 2, 3, 4 or 5. Enter 9 to return to the main menu.\n");
		}//switch()
	} while (selectedHousehold != 9);//do()
}//waterConsumption()

void averageDifference(void)
{

}//averageDifference

void quarterlyTotal(void)
{

}//quarterlyTotal()

void lowestConsumption(void)
{

}//lowestConsumption()

void fiveRoomConsumption()
{

}//fiveRoomConsumption()
