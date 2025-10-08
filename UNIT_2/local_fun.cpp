#include <iostream>
using namespace std;
void fun(){
    static int a=2;
    class lclass{
        int b;
		public:
		  void setdata(int a)
		  {
		  	 b=a;
		  }	
		  void getdata()
		  {
		  	cout<<"\nB: "<<b;
		  	cout<<"\nA: "<<a;
		  }
	};
	lclass l;
	l.setdata(10);
	l.getdata();
	
}
int main()
{
	fun();
}