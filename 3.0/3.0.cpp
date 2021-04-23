#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"rus");
	int num;
	cout<<"Введите номер(1-зима,2-весна,3-лето,4-осень):";
	cin>>num;
	switch(num){
	case 1:
		cout<<" Декабрь 31 день\n Январь 31 день\n Февраль 28 дней\n";
		break;
	case 2:
		cout<<" Март 31 день\n Апрель 30 дней\n Май 31 день\n";
		break;
	case 3:
		cout<<" Июнь 30 дней\n Июль 31 день\n Август 31 день\n";
		break;
	case 4:
		cout<<" Сентябрь 30 дней\n Октябрь 31 день\n Ноябрь 30 дней\n";
		break;
	default:cout<<" Вводиться неправильное значение сезона года ";
		break;
	}
	cin.get();
	cin.get();
	return 0;
}