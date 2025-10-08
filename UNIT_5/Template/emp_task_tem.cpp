#include <iostream>
using namespace std;
template <typename t1,typename t3>
class emp{
	 t1 empno;
	 t1 deptno;
	 t3 salary;
	 public:
  void setdata(t1 a,t1 b,t3 c)
  {
  	 empno=a;
  	 deptno=b;
  	 salary=c;
  }
   void show()
   {	cout<<"\nempno: "<<empno;
		cout<<"\ndeptno: "<<deptno;
		cout<<"\nSalary: "<<salary;
    }
};
int main()
{
	emp <int,float> e1;
	e1.setdata(1,101,6090.249);
	e1.show();
}