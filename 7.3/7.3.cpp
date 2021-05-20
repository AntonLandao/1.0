#include <iostream>

int main()
{
	const int size = 10;
	int A[size] = { 1, 1, 1, 2, 3, 3, 4, 5, 6, 7 };
	int B[size];
	int i, j, b = 0;
	int count = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (A[i] == A[j])
				continue;
			else
				count++;
		}
		if (count == size - 1)
			B[b++] = A[i];
		count = 0;
	}

	for (i = 0; i < b; i++)
		std::cout <<B[i] <<" ";
	std::cout << std::endl;
}