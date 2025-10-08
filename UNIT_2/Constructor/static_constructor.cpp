#include <iostream>
using namespace std;
class demo {
		int a,b,c;
		static int count;
	public:
		
		demo() {
			a=0;
			b=0;
			c=0;
		  count++;
		  cout<<"No of obj: "<<count; 
		}
		demo(int x) {
			
			a=b=c=x;
		}
		demo(int x,int y) {
			a=x;
			b=y;
			c=0;
		}
		demo(int x,int y,int z) {
			a=x; b=y; c=z;
		}
		void putdata() {
			cout<<"\n\n A:-"<<a<<" B:-"<<b<<" C:-"<<c;

		}

};
int demo::count;
int main() {

	demo d1,d2(5),d3(5,10),d4(5,10,15);
	d1.putdata();
	d2.putdata();
	d3.putdata();
	d4.putdata();
	return 0;
}