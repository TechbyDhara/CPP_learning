//12.Write a C++ program where class Vehicle stores general details.
// Class FourWheeler (derived from Vehicle) stores additional features,
//  and class Car (derived from FourWheeler) stores specific model details
//  . Display all information.
#include <iostream>;
using namespace std;
class Vehicle
{
   	char brand[40];
    char fualtype[40];
    public:
    	Vehicle(char b[],char ft[])
    	{
    		strcpy(brand,b);
    		strcpy(fualtype,ft);
		}
		void disp()
		{
			cout<<"\n<-----Vehicle Information----->";
			cout<<"\n\nBrand: "<<brand;
			cout<<"\nFual Type: "<<fualtype;
		}
};
class FourWheeler:public Vehicle
{
	char model[40];
    int seat;
	public:
		FourWheeler(char b[],char ft[],char m[],int s):Vehicle(b,ft)
    	{
    		strcpy(model,m);
    		seat=s;
		}
		void disp1()
		{
			disp();
			cout<<"\nModel: "<<model;
			cout<<"\nSeat: "<<seat;
		}
};
class Car:public FourWheeler
{
	char color[40];
	float price;
	public:
	    Car(char b[],char ft[],char m[],int s,char c[],float pr): FourWheeler(b,ft,m,s)
    	{
    		strcpy(color,c);
    		price=pr;
		}
	    void disp2()
		{
			disp1();
			cout<<"\nColor: "<<color;
			cout<<"\nPrice: "<<price;
		}		
};
int main()
{
	Car c("Toyato","petrol","BMW",6,"Black",120000);
	c.disp2();
	return 0;
}