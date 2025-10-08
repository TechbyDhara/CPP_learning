#include <iostream>
using namespace std;
template <typename t1>
t1 Add(t1 a)
{
	cout<<"\nTemplate A: "<<a;
}
void Add(int a)
{
	cout<<"\nFun A: "<<a;
}
int main()
{
	Add<int>(34);
	Add(56);
}