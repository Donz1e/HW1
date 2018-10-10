#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,k;
	printf("number\tsquare\tcube\n");
	for (i = 0; i < 11; i++)
	{
		j = i * i;
		k = i * i * i;
		printf("%d\t", i);
		printf("%d\t", j);
		printf("%d\n", k);
	}
	printf("\n");
	system("pause");
	return 0;
}
