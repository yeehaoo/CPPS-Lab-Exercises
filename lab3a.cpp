/*
Name: Yee Hao
Admin No.: 1601428D
Class: TE03
*/


#include <stdio.h>
/*
int APPLE = 25;
float RABBIT = 45.67;

void main(void)
{
	printf("Value of constant APPLE is %d\n", APPLE);
	printf("Value of constant RABBIT is %d\n", RABBIT);
	printf("Value of constant RABBIT is %.2f\n", RABBIT);
}*/

/*
void main(void)
{
	int num1;
	int num2;
	float num3;
	printf("Enter numerator(num1)");
	scanf_s("%d", &num1);
	
	printf("Enter interger denominator(num2)");
	scanf_s("%d", &num2);

	printf("\nnum1 / num2 involves integer division. \n");
	printf("%d / %d involves integer division with result of %d. \n", num1, num2, (num1 / num2));

	printf("\nEnter decimal denominator(num3)");
	scanf_s("%f", &num3);

	printf("\nnum1 / num3 will give decimal result after division.\n");
	printf("%d / %.2f will give decimal result %.2f after division.\n", num1, num3, num1 / num3);

	printf("\nnum1 %% num2 will give the remainder after division.\n");
	printf("%d %% %d will give remainder %d after division.\n", num1, num2, num1 % num2);
	
}*/

void main(void)
{
	float mass;
	float radius;
	float inertia;
	
	printf("Enter mass and radius.\n");
	scanf_s("%f %f", &mass, &radius);

	//inertia = 0.5 * (mass * radius * radius);
	//printf("The inertia is %.2f\n", inertia);

	printf("The inertia is %.2f\n", inertia = 0.5 * (mass * radius * radius));

}