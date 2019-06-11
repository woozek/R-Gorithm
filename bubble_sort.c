#include <stdio.h>
#include <stdlib.h>

#define MAX 10000
int n = MAX;
int list[MAX];

void bubble_sort(int list[], int n)
{
	int item;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j<n - 1; j++)
		{
			if (list[j]>list[j+1])
			{
				item = list[j];
				list[j] = list[j + 1];
				list[j + 1] = item;
			}
		}
	}

	
}

int main()
{
	for (int i = 0; i < n; i++)
	{
		list[i] = rand() % n;
	}

	bubble_sort(list, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", list[i]);
	}
}

