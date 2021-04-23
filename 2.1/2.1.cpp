#include <iostream>
using namespace std;
int main()
{
	int a,b,c,k;
	cin>>a>>b>>c>>k;
	if (a%k==0)
		cout<<"k divisor a"<<endl;
	if (b%k==0)
		cout<<"k divisor b"<<endl;
	if (c%k==0)
		cout<<"k divisor c"<<endl;
	return 0;
}