#include <iostream>
using namespace std;
template <typename t1,typename t2>
void Add(t1 a,t2 b)
{
	cout<<"\nA: "<<a;
	cout<<"\nB: "<<b;
}
int main()
{
	Add<float,int>(34.4,1);
}