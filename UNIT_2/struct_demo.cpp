#include <iostream>
using namespace std;
struct student {
	string name;
	float per;	
};
int main()
{
	struct student s1,s2;
	cout<<"Enter student 1 Name: ";
	getline(cin,s1.name);
	cout<<"Percentage: ";
	cin>>s1.per;
	cin.ignore();
	cout<<"\nEnter student 2 Name: ";
	getline(cin,s2.name);
	cout<<"Percentage: ";
	cin>>s2.per;
	
	
     cout<<"\nStudent 1 \n Name: "<<s1.name<<"\n Percentage: "<<s1.per;
     cout<<"\nStudent 2 \n Name: "<<s2.name<<"\n Percentage: "<<s2.per;
	
}