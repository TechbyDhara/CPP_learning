#include <iostream>
using namespace std;
class stud{
	int rno,marks[3];
	char nm[25];
	public:
		void getdata()
		{
			cout<<"\nEnter Rno: ";
			cin>>rno;
			cout<<"Enter Name: ";
			cin>>nm;
			cout<<"Enter Your Marks-->\n";
			for(int i=0;i<3;i++)
			{
				cout<<"Sub :" <<i+1<<" Mark :-";
				cin>>marks[i];
			}				
		}
		void putdata()
		{
			cout<<"\n\nRno: "<<rno;
			cout<<"\nName: "<<nm;
			int sum=0;
			for(int i=0;i<3;i++)
			{
				cout<<"\nSub :"<<i+1<<" mark:- "<<marks[i];
				sum+=marks[i];
			}
			cout<<"\nTotal: "<<sum;
			cout<<"\nPer: "<<sum/3.0;
			
		}
};
int main()
{
	stud s;
	s.getdata();
	s.putdata();
}