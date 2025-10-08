#include <iostream>
using namespace std;
int d=11;
int main()
{
    int d=90;
    cout<<d<<endl;
	cout<<"::D " << ::d;
	{
		{
			cout<<endl<<"::D--> " << ::d;
		}
		
	}	
}