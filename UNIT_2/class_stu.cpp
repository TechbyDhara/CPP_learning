#include <iostream>
using namespace std;

class student{
	int rollno;
	char name[25];
	int cm,om,wm,total;
	float per;
	public:
		void getdata()
		{
			cout<<"Enter rollno: ";
			cin>>rollno;
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter C++ mark: ";
			cin>>cm;
			cout<<"Enter Oracle mark: ";
			cin>>om;
			cout<<"Enter CMS mark: ";
			cin>>wm;	
		}
		void cal()
		{
			 total=cm+om+wm;
			 per=total/3;
		}
		void putdata()
		{
			cout<<"\n\t\t Name: "<<name;
			cout<<"\n\t\t Rollno: "<<rollno;
			cout<<"\n\t\t ---Subjects Marks---";
			cout<<"\n\t\t C++ : "<<cm<<"\n\t\t Oracle: "<<om<<"\n\t\t CMS : "<<wm;
			cout<<"\n\t\t Total: "<<total;
			cout<<"\n\t\t Percentage: "<<per;
			cout<<"\n\t\t Grade : ";
			if(per>=70)
			{
				cout<<" Distrinction";
			}
			else if(per>=60)
			{
				cout<<" First";	
			}
			else if(per>=50)
			{
				cout<<" Second";	
			}
			else if(per>=40)
			{
				cout<<" Pass";	
			}
			else{
				cout<<" Fail";
			}
		}
		
};
int main()
{
	student s;
	s.getdata();
	s.cal();
	s.putdata();
	return 0;
}