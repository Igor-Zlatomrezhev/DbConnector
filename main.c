#include <stdio.h>

void switch(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x = 5;
	int y = 10;
	int z = x + y;

	printf("Hello, World!\n");
	return 0;
}