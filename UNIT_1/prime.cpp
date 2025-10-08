#include <iostream>
using namespace std;
int main()
{
	int f=0,n;
	cout<<"Enter number: ";
	cin>>n;
	
	for(int i=2;i<=100;i++)
	{
		if(n%i==0)
		{
		    f=1;
	        cout<<i;  
		}
	}
	if(f==1)
	{
		cout<<"Number is not prime";
	}
	else{
		cout<<"Number is prime";
	}
	return 0;
}