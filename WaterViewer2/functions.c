#include <stdio.h>

extern float household[][12];

int selectedHousehold = 0;
int j = 0;
int k = 0;
int i = 0;
float totalConsumption = 0.0;
float averageConsumption = 0.0;
int selectedMonth = 0;
float averageDiff = 0.0;

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
	printf("Please select the household by entering its numerical value. Enter 9 to return to main menu.\n");
	scanf_s("%d", &selectedHousehold);
	if (selectedHousehold == 9)continue;
	for (j = 0; j < 12; j++) {
			totalConsumption += household[selectedHousehold - 1][j];
		}
	averageConsumption = totalConsumption / 12.0;
	printf("The average consumption of %droom household is %.2f.\n\n\n", selectedHousehold, averageConsumption);
	totalConsumption = 0;
	averageConsumption = 0;
	} while (selectedHousehold != 9);
}

void waterConsumption(void) {
	do {
		printf("Please select the household by entering its numerical value. Enter 9 to return to main menu.\n");
		scanf_s("%d", &selectedHousehold);
		if (selectedHousehold == 9)continue;
		printf("Please select the month by entering its numerical value.\n");
		scanf_s("%d", &selectedMonth);
		printf("The water consumption in the month %d in %droom household is %.2f.\n\n\n", selectedMonth, selectedHousehold, household[selectedHousehold - 1][selectedMonth - 1]);
	} while (selectedHousehold != 9);
}

void averageDifference(void) {
	do {
		printf("Please select the month by entering its numerical value. Enter 0 to return to main menu.");
		scanf_s("%d", &selectedMonth);
		if (selectedMonth == 0)continue;
		for (j = 0; j < 5; j++) {
			totalConsumption += household[j][selectedMonth - 1];
		}
		averageConsumption = totalConsumption / 5.0;
		printf("The average consumption of all households in month %d is %.2f.\n", selectedMonth, averageConsumption);
		for (j = 0; j < 5; j++) {
			averageDiff = household[j][selectedMonth] - averageConsumption;
			printf("The difference of water consumption between %droom household and average for month %d is %.2f.\n", j + 1, selectedMonth, averageDiff);
		}
		averageConsumption = 0.0;
		totalConsumption = 0.0;
	} while (selectedMonth != 0);
}
void quarterlyTotal(void) {
	//Display quarterly total water consumption of a selected HDB household
	do {
		printf("Please select the household by entering its numerical value. Enter 9 to return to main menu.\n");
		scanf_s("%d", &selectedHousehold);
		if (selectedHousehold == 9)continue;
		k = 0;
		do {
			i = k * 4;
			j = i;
			for (j = i; j < i+3; j++) {
				totalConsumption += household[selectedHousehold - 1][j];
			}
			printf("The water consumption for quarter %d in %droom household is %.2f\n", k+1, selectedHousehold, totalConsumption);
			totalConsumption = 0;
			k++;
		} while (k<4);
		puts("\n");
	} while (selectedHousehold != 9);
}
void lowestConsumption(void) {
	int lowestMonth[] = { 0,0,0,0,0 };
	int	minHousehold = 0;
	int minMonth = 0;
	float min = 999.0;
	float lowest[] = { 999.0,999.0,999.0,999.0,999.0 };
	for (j = 0; j < 5; j++) {
		for (k = 0; k < 12; k++) {
			if (household[j][k] < lowest[j]) {
				lowest[j] = household[j][k];
				lowestMonth[j] = k;
			}
		}
		if (lowest[j] < min) {
			min = lowest[j];
			minMonth = lowestMonth[j];
			minHousehold = j;
		}
	}
	printf("The lowest consumption is %.2f, which occurred in month %d and in %droom household.\n\n", min,minMonth+1,minHousehold+1);
}

void fiveRoomConsumption(void) {
	float increaseAmt[11];
	float highestIncrease = 0;
	int highestMonth = 0;
	for (j = 0; j < 11; j++) {
		increaseAmt[j] = household[4][j + 1] - household[4][j];
	}
	for (k = 0; k < 11; k++) {
		if (increaseAmt[k] > highestIncrease) {
			highestIncrease = increaseAmt[k];
			highestMonth = k+1;
		}
	}
	printf("The highest increase is %.2f, which occurred from month %d to month %d.\n\n", highestIncrease,highestMonth++.,highestMonth);
}
