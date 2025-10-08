#include <iostream>
#include<vector>
#include <stack>
using namespace std;
int main()
{
	stack<int>st;
	st.push(45);
	st.push(55);
	st.push(65);
	st.push(75);
	st.push(85);
	st.push(95);
	
	st.pop();
	while(!st.empty())
	{
		cout<<"\n"<<st.top();
		st.pop();
	}
}