#include <iostream>
using namespace std;
class stu{
	private:
		int empno;
		int deptno;
		int sal;
	public:
		void setdata(int e,int d,int s)
		{
			empno=e;
			deptno=d;
			sal=s;
		}
		void getdata()
		{
			cout<<"\n\n Emp no: "<<empno;
			cout<<"\n Dept no: "<<deptno;
			cout<<"\n Salary: "<<sal;
		}
};
int main()
{
	stu s1,s2,s3;
	s1.setdata(1,10,12000);
	s2.setdata(2,11,15000);
	s3.setdata(3,12,20000);
	s1.getdata();
	s2.getdata();
	s3.getdata();
}