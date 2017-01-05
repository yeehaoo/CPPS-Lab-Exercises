#include <stdio.h>
extern float oneRoom[];
extern float twoRoom[];
extern float threeRoom[];
extern float fourRoom[];
extern float fiveRoomo[];


void showMenu(void)
{
	printf("Please select a function, A B C D E F or Q.\n");
	printf("A. Display average water consumption of HDB households for a selected household across 12 months.\n");
	printf("B. Display water consumption of a selected household for a selected monoth.\n");
	printf("C. Display differences between average water consumption and water consumption of each household type for a selected month.\n");
	printf("D. Display quarterly total water consumption of a selected HDB household.\n");
	printf("E. Display the lowest water consumption and its corresponding months and household type from Jan to Dec.\n");
	printf("F. Display the difference between water consumptions of HDB 5-Room in each consecutive month, and highest increase amount and its corresponding month.\n");
	printf("Q. Exit the program.\n");
}//showMenu()

void average(void)
{

}//average()
