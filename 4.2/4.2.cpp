#include <iostream>
using namespace std;
int main()
{
	double x; cin >> x;
	double p = 1.;
	for (int i = 1; i <= 63; i += 2)
	{
		p *= (x - i) / (x - i - 1);
	}
	cout << p;
	return 0;
}