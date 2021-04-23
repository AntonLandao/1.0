#include <iostream>
using namespace std;
int main()
{
	double x,y;
	cout<<"Enter x:";
	cin>>x;
	cout<<"Enter y:";
	cin>>y;
	{
		if (x>0&&y>0&&x*x+y*y<=36&&y>-x+3)
			cout<<"true";
		else
			cout<<"false";
	}
	return 0;
}