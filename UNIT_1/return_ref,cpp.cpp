#include <iostream>
using namespace std;

int & tryy(int &x)
{
	x=10;
	return x;
}
int main()
{
	int a=5;
	int &r=tryy(a);
    r=20;

	cout<<"\nX: "<<tryy(a);
	cout<<"\nR: "<<r;
	return 0;
}
