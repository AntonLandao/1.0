#include <iostream>
#include <cmath>
using namespace std;
double eps = 0.000001;
double sq(double a,double b,double c)
{
	double p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{
	double a1,b1,c1,a2,b2,c2;
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	if (sq(a1,b1,c1)>=sq(a2,b2,c2)-eps&&sq(a1,b1,c1)<=sq(a2,b2,c2)+eps)
		cout<<"TRUE";
	else
		cout<<"FALSE";
}