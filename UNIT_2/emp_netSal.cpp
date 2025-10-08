#include <iostream>
using namespace std;
class emp{

		int empno;
		char fname[25],lname[25];
		float sal,ta,da,pf,netsal;
		public:
		  void getdata()
		  {
		  	 cout<<"\n\nEnter emp no: ";
		  	 cin>>empno;
		  	 cout<<"Enter your name: ";
		  	 cin>>fname;
		  	  cout<<"Enter your name: ";
		  	 cin>>lname;
		  	 cout<<"Enter your salary: ";
		  	 cin>>sal;
		  }	
		  void cal()
		  {
		  	 ta=sal*0.05;
		  	 da=sal*0.05;
		  	 pf=sal*0.10;
		  	 netsal=sal+ta+da-pf;		  	 
		  }
		  void putdata()
		  {
		  	cout<<"\nEmpno: "<<empno;
		  	cout<<"\nName: "<<fname <<lname;
		  	cout<<"\nSalary:"<<sal;
		  	cout<<"\nTA: "<<ta;
		  	cout<<"\nDA: "<<da;
		  	cout<<"\nPF: "<<pf;
		  	cout<<"\n Netsalary: "<<netsal;
		  }
};
int main()
{
	emp e[5];
	for(int i=0;i<5;i++)
	{
		e[i].getdata();
		e[i].cal();
	}
	for(int i=0;i<5;i++)
	{	
		e[i].putdata();
	}
	return 0;
}