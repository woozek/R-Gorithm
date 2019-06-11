#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

void selection_sort(int list[], int n)
{
	int item;

	for (int i = 0; i < n; i++)
	{
		item = list[i];
		for (int j = i + 1; j < n; j++)
		{
			if (item>list[j])
			{
				list[i] = list[j];
				list[j] = item;
			}
		}
	}
}

int main()
{
	int n = MAX;
	int a[MAX];

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % n;
	}

	selection_sort(a, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
}