#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, e;
	printf("Total miles driven per day : ");
	scanf_s("%d", &a);
	printf("Cost per gallon of gasoline : ");
	scanf_s("%d", &b);
	printf("Average miles per gallon : ");
	scanf_s("%d", &c);
	printf("Parking fees per day : ");
	scanf_s("%d", &d);
	printf("Tolls per day : ");
	scanf_s("%d", &e);
	a = a / c * b + d + e;
	printf("Total price per day : %d\n", a);
	system("pause");
	return 0;
}