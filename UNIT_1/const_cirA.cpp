#include <iostream>
using namespace std;

void area(const float r)
{
	const float PI=3.14;
	float area=PI*r*r;
	cout<<"Area of circle: "<<area;
	
	
}                  
int main()
{ 
    float r;
	cout<<"Enter r: ";
	cin>>r;
	area(r);
	return 0;
}       