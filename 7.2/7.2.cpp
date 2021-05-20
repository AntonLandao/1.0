#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int N = 100;
int main() {
	int a[N];
	int t;

	srand(time(NULL));
	cout << "input t: ";
	cin >> t;

	for (int i = 0; i < N; i++) {
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i++)
		if (a[i] == t * t)
			cout << a[i] << "[" << i << "] ";

	cout << endl;
	return 0;
}