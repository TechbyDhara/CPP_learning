#include <iostream>
using namespace std;

void line()
{
	for(int i=1;i<=50;i++)
	{
		cout<<"_";
	}
	cout<<endl;
}
void line(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<"_";
	}
	cout<<endl;
}
void line(int n,char ch)
{
	for(int i=1;i<=n;i++)
	{
		cout<<ch;
	}
	cout<<endl;
}
void line(int sp,int ep,char ch)
{
	for(int i=sp;i<=ep;i++)
	{
		cout<<ch;
	}
	cout<<endl;
}
int main()
{
	int sp,ep;
	char ch;
	cout<<"Enter Number (end point): ";
	cin>>ep;
	cout<<"Enter Number (start point): ";
	cin>>sp;
	cout<<"Enter char: ";
	cin>>ch;
	line();
	line(ep);
	
	cout<<endl;
	
	line(ep,ch);
	line(sp,ep,ch);
	return 0;
}