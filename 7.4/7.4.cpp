#include <iostream>
using namespace std;


int main()
{
	int i, n;
	int ind, j;
	int A[] = { 1, 44, -7, 713, 80, 12, -93, -48, 9, 40 };
	n = 10;
	int* c = new int[n];
	for (int i = 0; i < n; i++)
		c[i] = -1;

	for (i = 0; i < n; i++) {
		for (ind = 0, j = 0; j < n; j++)
			if (A[j] < A[i]) ind++;
		c[ind] = A[i];
	}
	for (i = 0; i < n; i++)
		if (c[i] == -1) c[i] = c[i - 1];
	for (i = 0; i < n; i++)
		cout << c[i] << " ";
	system("pause");
	return 0;
}