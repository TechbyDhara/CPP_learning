#include <iostream>
using namespace std;
class emp{
	int empno;
	int deptno;
	int salary;
	public:
		void setdata()
		{
			cout<<"\n\nEnter Empno: ";
			cin>>empno;
			cout<<" Enter deptno: ";
			cin>>deptno;
			cout<<"Enter salary: ";
			cin>>salary;
		}
		void getdata()
		{
			cout<<"\n\n Empno: "<<empno;
			cout<<"\n Deptno: "<<deptno;
			cout<<"\n Salary: "<<salary;
		}
};
int main()
{
	emp e1,e2,e3;
	e1.setdata();
	e2.setdata();
	e3.setdata();
	e1.getdata();
	e2.getdata();
	e3.getdata();
	return 0;
}