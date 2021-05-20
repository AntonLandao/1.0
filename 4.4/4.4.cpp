#include <iostream>
#include <math.h>
using namespace std;

double F(double x)
{
	return 2*pow(sin(x),2)+1;
}


int main()
{
	double a,b,h;
	cout<<"Enter a:";cin>>a;
	cout<<"Enter b:";cin>>b;
	cout<<"Enter h:";cin>>h;

	while (a<=b)
	{
		cout<<"x= "<<a<<"|F(x)= "<<F(a)<<endl;
		a+=h;
	}

	return 0;
}