#include <iostream>
using namespace std;
struct stu{

		int empno;
		int deptno;
		int sal;	
};
int main()
{
	struct stu s1,s2,s3;
	s1.empno=1;
	s1.deptno=10;
	s1.sal=12000;
	s2.empno=2;
	s2.deptno=20;
	s2.sal=32000;
	s3.empno=3;
	s3.deptno=30;
	s3.sal=20000;
	cout<<"\nEmp no: "<<s1.empno<<"\n Dept no: "<<s1.deptno<<"\n Salary: "<<s1.sal;
	cout<<"\nEmp no: "<<s2.empno<<"\n Dept no: "<<s2.deptno<<"\n Salary: "<<s2.sal;
	cout<<"\nEmp no: "<<s3.empno<<"\n Dept no: "<<s3.deptno<<"\n Salary: "<<s3.sal;
}