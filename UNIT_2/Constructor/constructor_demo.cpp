#include <iostream>
using namespace std;
class demo{
    //char name[6];
    int rno;
	int age;
	public:
		demo()
		{
			rno=34;
			age=18;
		}
		void putdata()
		{
			//cout<<"\n Name: "<<name;
			cout<<"\n Rno: "<<rno;
			cout<<"\n Age: "<<age;
			
		}
	
};
int main()
{
	
	demo d;
	d.putdata();
	return 0;
}