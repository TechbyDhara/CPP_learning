#include <iostream>
using namespace std;
template <typename T>

T Add(T a,T b)
{
	return a+b;
}
template <typename T1>
T1 sub(T1 a,T1 b)
{
	return (a-b);
}
template <typename T2>
T2 mul(T2 a,T2 b)
{
	return (a*b);
}
int main(){
	int a,b;
	float c,d;
	cout<<"\nEnter two number for add(int) : "; cin>>a>>b; cout<<"Add: "<<Add<int>(a,b);
	cout<<"\nEnter two number for add(float) : "; cin>>c>>d; cout<<"Add: "<<Add<float>(c,d);
	
	cout<<"\nEnter two number for sub(int) : "; cin>>a>>b; cout<<"sub: "<<sub<int>(a,b);
	cout<<"\nEnter two number for sub(float) : "; cin>>c>>d; cout<<"sub: "<<sub<float>(c,d);
	
	cout<<"\nEnter two number for mul(int) : "; cin>>a>>b; cout<<"mul: "<<mul<int>(a,b);
	cout<<"\nEnter two number for mul(float) : "; cin>>c>>d; cout<<"mul: "<<mul<float>(c,d);
	
}