#include <iostream>
#include <stack>
using namespace std;
	void reverse(stack<int> &st)
	{
		if(st.empty()) return;
		int top=st.top();
		st.pop();
		reverse(st);
		stack<int> temp;
		while(!st.empty())
		{
			temp.push(st.top());
			st.pop();
		}
		st.push(top);
		while(!temp.empty())
		{
			st.push(temp.top());
			temp.pop();
		}
	}
	int main()
	{
		stack<int>st;
	st.push(45);
	st.push(55);
	st.push(65);
	st.push(75);
	st.push(85);
	st.push(95);
//	   while(!st.empty())
//		{
//			cout<<"\n"<<st.top();
//			st.pop();
//		}
	  reverse(st);
	  cout<<"Reverse stack: ";
	  while(!st.empty())
		{
			cout<<"\n"<<st.top();
			st.pop();
		}
	  
	  return  0;	
	}
