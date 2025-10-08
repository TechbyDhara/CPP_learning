#include <iostream>
#include<vector>
#include <queue>
using namespace std;
int main()
{
	queue<int>q;
	q.push(45);
	q.push(55);
	q.push(65);
	q.push(75);
	q.push(85);
	q.push(95);
	cout<<"\nFront of queue: "<<q.front();
	cout<<"\nBack of queue: "<<q.back();
	//q.pop();
	cout<<"\n\nQueue--------------------->";
	while(!q.empty())
	{
		cout<<"\n"<<q.front();
		q.pop();
	}

}