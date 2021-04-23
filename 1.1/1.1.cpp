#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x,y,res;
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	res=pow((x+1)/(x-1),x)+18*x*y*y;
	cout<<"res="<<res<<"\n";
	cin.get();
	return 0;
}