#include <iostream>
using namespace std;

int main()
{
	int a=0,sum=0,b=1,n;
	cout<<"Enter number: ";
	cin>>n;
	cout<<"Fibonacciii: "<<a<<"," <<b<<", ";
	while(sum<n-2)
	{
		sum=a+b;
		a=b;
		b=sum;
		cout<<b<<", ";
	}
}