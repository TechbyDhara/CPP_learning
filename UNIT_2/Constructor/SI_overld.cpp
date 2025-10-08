#include <iostream>
#include <math.h>
using namespace std;

class demo{
	int p,n;
	float r,i;
	public:
	   demo(){
	   	 p=0;
	   	 n=0; 
	   	 r=0;
	   }
	   demo(int p1,int n1,float r1=0.12)
	   {
	   	    p=p1; n=n1; r=r1;
	   	    i=p*pow((1+(r/100)),n);
	   }	
	   demo(int p1,int n1,int r1)
	   {
	   	   p=p1; n=n1; r=r1;
	   	   i=p*pow((1+(r/100)),n);
	   }
	   void display()
	   {
	   	  cout<<"\n\n Simple Interest: "<<i;
	   }
};
int main()
{
	int p,n; float r;
	cout<<"Enter amount: ";
	cin>>p;
	cout<<"Enter rate: ";
	cin>>r;
	cout<<"Enter n of year: ";
	cin>>n;
	demo d(p,r,n);
	demo d2(p,n);
	d.display();
	d2.display();
}