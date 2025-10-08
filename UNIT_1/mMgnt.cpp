#include <iostream>
using namespace std;

int main()
{
	int * ptr;
	 ptr = new int(10);
	cout<<"A address: "<<ptr;
	cout<<"\nA value: "<<*ptr;
	delete ptr;
	cout<<"\nA value: "<<*ptr;
}
