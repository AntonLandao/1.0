#include <iostream>

using namespace std;
int main(void)
{
	const float PI=3.14;
	float S(0),C;
	cout<<"C=";
	cin>>C;
	S=C*C/(4*PI);
	cout<<"S="<<S;
	return 0;
}