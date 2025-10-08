#include <iostream>
using namespace std;
template <typename t1,typename t2>
class stud{
	 t1 rolno;
	 t2 per;
	 public:
  void setdata(t1 a,t2 b)
  {
  	 rolno=a;
  	 per=b;
  }
   void show()
   {	cout<<"\nRolno: "<<rolno;
		cout<<"\npercentage: "<<per;
    }
};
int main()
{
	stud <int,float> s1;
	s1.setdata(34,99.99);
	s1.show();
}