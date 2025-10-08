#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int a,b;
  cout<<"Enter number A: ";
  cin>>a;
  cout<<"Enter number B: ";
  cin>>b;
  swap(&a,&b);
  cout<<"After swapping: \n";
  cout<<"\n A: "<<a;
  cout<<"\n B: "<<b;
  return 0;	
}