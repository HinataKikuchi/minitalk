#include <stdio.h>

int main (void)
{
	char c='a';
	int counter = 1;
	for (int i = 0; i < 8; i++)
	{
		printf("%d\n", (c >> i) & counter);
	}
}