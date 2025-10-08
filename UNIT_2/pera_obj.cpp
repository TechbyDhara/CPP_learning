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
	void add(pob p2)
	{
		cout<<"Addition : "<<x+p2.x;
	 } 
};
int main()
{
	pob p1,p2;
	p1.getdata();
	p2.getdata();
	p1.add(p2);
	return 0;
	
	
}