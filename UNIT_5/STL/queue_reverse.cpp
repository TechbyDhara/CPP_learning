#include <iostream>
#include <queue>
using namespace std;
	void reverse(queue<int> &q)
	{
		if(q.empty()) return;
		int top=q.front();
		q.pop();
		reverse(q);
		q.push(top);
		
	}
	int main()
	{
	queue<int>q;
	q.push(45);
	q.push(55);
	q.push(65);
	q.push(75);
	q.push(85);
	q.push(95);
//	   while(!q.empty())
//		{
//			cout<<"\n"<<q.front();
//			q.pop();
//		}
	  reverse(q);
	  cout<<"Reverse qack: ";
	  while(!q.empty())
		{
			cout<<"\n"<<q.front();
			q.pop();
		}
	  
	  return  0;	
	}
