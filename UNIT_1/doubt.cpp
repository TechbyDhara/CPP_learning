#include <iostream>
using namespace std;
int main()
{
	int a=10,b=30;
	cout<<"";
    int &p=a;
    int &q=a;
	cout<<"\n A: "<<a;
	cout<<"\n P: "<<p;
	cout<<"\n q: "<<q;
	
 // &p=a;
//	p=b;
//	cout<<"\n P: "<<p;
	
}