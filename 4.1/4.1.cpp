#include <iostream>
#include <math.h>

using namespace std;

void primeGenerator(int x)
{
if (x < 0 || x > 28)
cout << "Invalid value of x!";
else
for (int i = 0; i <= x; ++i)
cout << 2 * pow(i, 2) + 29 << endl;
}

int main()
{
int x;
cout << "Enter x ";
cin >> x;
primeGenerator(x);
return 0;
}