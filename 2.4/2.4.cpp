#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Rus");
	float x,y;
	cout<<"¬ведите число x:";cin>>x;
	if (x>=8){
		y=-pow(x,2)+x-9;
		cout<<"y=-pow(x,2)+x-9="<<y<<endl;
	}
	else {
		y=1/(pow(x,4)-6);
		cout<<"y=1/(pow(x,4)-6)="<<y<<endl;
	}
	system("PAUSE");
	return 0;
}