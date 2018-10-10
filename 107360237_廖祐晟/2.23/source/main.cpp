#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k;
	printf("input three integers : ");
	scanf_s("%d%d%d", &i, &j, &k);
	if (i > j)
	{
		if (j > k)
		{
			printf("largest integers is : %d\n", i);
			printf("smallest integers is : %d\n", k);
		}
		if (j < k)
		{
			if (i > k)
			{
				printf("largest integers is : %d\n", i);
				printf("smallest integers is : %d\n", j);
			}
			if (i < k)
			{
				printf("largest integers is : %d\n", k);
				printf("smallest integers is : %d\n", j);
			}
			if (i == k)
			{
				printf("largest integers is : %d\n", i);
				printf("smallest integers is : %d\n", j);
			}
		}
		if (j == k)
		{
			printf("largest integers is : %d\n", i);
			printf("smallest integers is : %d\n",j);
		}
	}
	if (i < j)
	{
		if (j < k)
		{
			printf("largest integers is : %d\n", k);
			printf("smallest integers is : %d\n", i);
		}
		if (j > k)
		{
			if (i > k)
			{
				printf("largest integers is : %d\n", j);
				printf("smallest integers is : %d\n", k);
			}
			if (i < k)
			{
				printf("largest integers is : %d\n", j);
				printf("smallest integers is : %d\n", i);
			}
			if (i == k)
			{
				printf("largest integers is : %d\n", j);
				printf("smallest integers is : %d\n", i);
			}
		}
		if (j == k)
		{
			printf("largest integers is : %d\n", j);
			printf("smallest integers is : %d\n",i);
		}
	}
	if (i == j)
	{
		if (j < k)
		{
			printf("largest integers is : %d\n", k);
			printf("smallest integers is : %d\n", i);
		}
		if (j > k)
		{
			printf("largest integers is : %d\n", i);
			printf("smallest integers is : %d\n", k);
		}
		if (j == k)
			printf("you input three integers are equal\n");
	}
	system("pause");
	return 0;
}