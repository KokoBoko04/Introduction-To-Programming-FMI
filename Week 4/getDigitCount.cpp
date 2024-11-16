#include <iostream>

int findDigitCount(int n)
{
	if (n == 0)
	{
		return 1;
	}

	int count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}

	return count;
}