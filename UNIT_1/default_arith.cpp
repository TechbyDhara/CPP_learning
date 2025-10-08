#include <iostream>
using namespace std;
void opera(int x,int y=5)
{
	cout<<"\n Addition : "<<x+y;
	cout<<"\n subtraction : "<<x-y;
	cout<<"\n multiplication : "<<x*y;
	cout<<"\n div : "<<x/y;
	
}
int main()
{
	int a;
	cout<<"Enter first number: ";
	cin>> a;
	opera(a);
	return 0;
}