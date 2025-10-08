#include <iostream>
using namespace std;
class emp{

		int empno;
		string name;
		float sal,ta,da,pf,hra,netsal;
		public:
		  emp(int en,string nm,float s)
		  {
		  	 empno=en;
		  	 name=nm;
		  	 sal=s;
		  }
		  void cal()
		  {
		  	 ta=sal*0.05;
		  	 da=sal*0.05;
		  	 hra=sal*0.05;
		  	 pf=sal*0.10;
		  	 netsal=sal+ta+hra+da-pf;		  	 
		  }
		  void display()
		  {
		  	cout<<"\nEmpno: "<<empno;
		  	cout<<"\nName: "<<name;
		  	cout<<"\nSalary:"<<sal;
		  	cout<<"\nTA: "<<ta;
		  	cout<<"\nDA: "<<da;
		  	cout<<"\nHRA: "<<hra;
		  	cout<<"\nPF: "<<pf;
		  	cout<<"\n Netsalary: "<<netsal;
		  }
};
int main()
{
	emp e(1,"Dhara",50000.0);
	e.cal();
	e.display();
	return 0;
}