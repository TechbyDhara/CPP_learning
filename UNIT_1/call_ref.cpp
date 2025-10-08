#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
	int c=a;
	a=b;
	b=c;
}
int main()
{
	int a=10,b=30;
	cout<<"CALL BY Refrence";
	swap(a,b);
	cout<<"\n A: "<<a;
	cout<<"\n B: "<<b;
	return 0;
}