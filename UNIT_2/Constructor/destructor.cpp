#include <iostream>
using namespace std;
class demo {
		int a,b,c;
		static int count;
	public:
		
		demo() {
		  count++;
		  cout<<"\n\nNo of obj: "<<count; 
		}
		~demo()
		{
			count--;
			cout<<"\nRemaining obj: "<<count; 
		}
};
int demo::count;
int main() {

	demo d1;
	{
		demo d2,d3;
		{
			demo d4;
			{
				demo d5;
			}
			demo d6;
		}
		demo d7;
	}
	return 0;
}