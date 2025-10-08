#include <iostream>
using namespace std;
int main()
{
	int a=10,b=0;
	try{
		if (b==0)
		{
			throw b;
		}
		else{
			float c=(float)a/b;
			cout<<"\nAns: "<<c;
		}
	}
	catch(int i)
	{
		cout<<"B: "<<i<<"\nCan not divide by 0";
	}
	
}