#include <iostream>
using namespace std;
class pob{
	int x;
	public:
	void getdata()
	{
		cout<<"Enter number : ";
		cin>>x;
	}
	void add(pob p2,pob p3)
	{
		cout<<"Addition : "<<x+p2.x+p3.x;
	 } 
};
int main()
{
	pob p1,p2,p3;
	p1.getdata();
	p2.getdata();
	p3.getdata();
	p1.add(p2,p3);
	return 0;
	
	
}