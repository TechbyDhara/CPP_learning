#include <iostream>
using namespace std;
class stud{
	int rno;
	float per;
	
	public:
		void getdata()
		{
			cout<<"\nEnter Rno: ";
			cin>>rno;
			cout<<"Enter Percentage: ";
			cin>>per;
				
		}
		void putdata()
		{
			cout<<"\n\nRno: "<<rno;
			cout<<"\nPer: "<<per;
			
		}
};
int main()
{
	stud s[3];
		    for(int i=1;i<=3;i++)
			{
				s[i].getdata();
			}
			for(int i=1;i<=3;i++)
			{
				s[i].putdata();
			}
}