#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j,k;
	printf("input two integers : ");
	scanf_s("%d%d", &i, &j);
	k = i % j;
	if (k == 0)
		printf("%d is a multiple of the %d\n", i, j);
	else
		printf("%d is not a multiple of the %d\n", i, j);
	system("pause");
	return 0;
}