#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"rus");
	int num;
	cout<<"������� �����(1-����,2-�����,3-����,4-�����):";
	cin>>num;
	switch(num){
	case 1:
		cout<<" ������� 31 ����\n ������ 31 ����\n ������� 28 ����\n";
		break;
	case 2:
		cout<<" ���� 31 ����\n ������ 30 ����\n ��� 31 ����\n";
		break;
	case 3:
		cout<<" ���� 30 ����\n ���� 31 ����\n ������ 31 ����\n";
		break;
	case 4:
		cout<<" �������� 30 ����\n ������� 31 ����\n ������ 30 ����\n";
		break;
	default:cout<<" ��������� ������������ �������� ������ ���� ";
		break;
	}
	cin.get();
	cin.get();
	return 0;
}