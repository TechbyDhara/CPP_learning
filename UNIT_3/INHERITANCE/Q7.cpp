//7. Write a C++ program where a base class Product stores
// product name and price. Two derived classes Electronics
//  and Clothing should calculate discount differently.
#include <iostream>
using namespace std;
class Product{
	
	public:
		char name[40];
	    float price;
		Product(char nm[],float pr)
		{
			strcpy(name,nm);
			price=pr;
		}
		void disp()
		{
		   cout<<"\n\nProduct Name: "<<name;
		   cout<<"\nPrice: "<<price;	
		}
		
};
class Electronics: public Product{
	float dispr;
	public:
		Electronics(char nm[],float pr):Product(nm,pr)
		{
			dispr = price * 0.90;  
		}
		void disp1()
		{
		      disp();
			 cout << "\nDiscount: 10%";
             cout<<"\nAfter Discount Price: "<<dispr;
		}
};
class Clothing: public Product{
	float dispr;
	public:
		Clothing(char nm[],float pr):Product(nm,pr)
		{
			 dispr = price * 0.80;
		}
		void disp2()
		{
			disp();
			 cout << "\nDiscount: 20%";
             cout<<"\nAfter Discount Price: "<<dispr;
		}
};
int main()
{
	Electronics e("TV",9000);
	Clothing c("Dress",2000);
	e.disp1();
	c.disp2();
}
