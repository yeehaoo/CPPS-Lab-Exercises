#include <stdio.h>
void dispTariff();
float getTariff(duration);
#define TARIFF 0.25
int eUsage[] = { 800,650,525,450,420,405,400,400,400,400 };
float usageA = 0.0;
float usageB = 0.0;
float increase = 0.0;
int duration = 0;

void main(void) {
	
	dispTariff();
	usageA = getTariff(5);
	usageB = getTariff(8);
	increase = ((usageB - usageA) / usageA) * 100;
	printf("%f", increase);
}//main()

void dispTariff(void) {
	int j = 0;
	float ebill = 0.0;
	for (j = 0; j < 6; j++) {
		ebill = ebill + eUsage[j] / 1000.0 * TARIFF;
	}//for()
	ebill = ebill * 30;
	printf("%f\n\n", ebill);
}//dispTariff()

float getTariff(int duration) {
	int j = 0;
	float ebill = 0.0;
	for (j = 0; j < duration; j++) {
		ebill = ebill + eUsage[j] / 1000.0 * TARIFF;
	}//for()
	ebill = ebill * 30;
	return ebill;
}//dispTariff()
