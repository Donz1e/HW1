#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	printf("input an integer : ");
	scanf_s("%d", &i);
	j = i % 2;
	if (j == 0)
		printf("%d is an even.\n",i);
	if (j == 1)
		printf("%d is an odd.\n",i);
	system("pause");
	return 0;
}