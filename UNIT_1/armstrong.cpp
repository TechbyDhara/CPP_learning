#include <iostream>
using namespace std;
int main()
{
	int n,num;
	cout<<"Enter number: ";
	cin>>n;
	num=n;
	int d=0,sum=0;
	while(n>0)
	{
		d=n%10;
		sum+=d*d*d;
		n=n/10;
	}
	if(num==sum)
	{
		cout<<"Number is armstrong";
	}
	else{
		cout<<"Number is not armstrong";
	}
}