#include <iostream>
#include <conio.h>
#include <math.h>


using namespace std;

int main()
{
	setlocale(0,"Russian");


	double a,b,c,d=0.0;float x1,x2,x,x3,x4,t1,t2;

	cout<<"Решение биквадратных уравнений"<<endl<<endl;
	cout<<"ax^4 + bx^2 + c = 0"<<endl<<endl;

	cout<<"Введите a:"<<endl;
	cin>>a;
	cout<<"Введите b:"<<endl;
	cin>>b;
	cout<<"Введите c:"<<endl;
	cin>>c;
	cout<<endl;


	d=(b*b)-(4*a*c);
	if (d>0){

		t1=((-b)-(sqrt(d)))/(2*a);
		t2=((-b)+(sqrt(d)))/(2*a);
		if (t1>=0) {
			x1=sqrt(t1);
			x2=-sqrt(t1);
		}
		else

			if (t2 >= 0) {
				x3 = sqrt(t2);
				x4 = -sqrt(t2);
				cout<<"Дискриминант = "<<d<<endl;
				cout<<" Корень из дискриминанта = "<<sqrt(d)<<endl<<endl;
				cout<<"X 1,2 = +- "<<sqrt(t1)<<endl;
				cout<<"X 3,4 = +- "<<sqrt(t2)<<endl;
			}
			else if (d < 0)
				cout << "Корней в действительных числах нет" << endl << endl;

			else if (d == 0)
			{
				x1 = sqrt(-b / 2 * a);
				x2 = -sqrt(-b / 2 * a);
				x = ((-b) / (2 * a));
				cout << "Один корень"<<endl<<endl;
			}
		_getch();
		return 0;
	}
}