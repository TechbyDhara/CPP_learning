#include <iostream>
#include <string>
using namespace std;
class HJD {
		int rno;
		char name[30];
	public:
		void setdata(int rn,char nm[]) {
			rno=rn;
			strcpy(name,nm);
		}
		void getdata() {
			cout<<"\nName: "<<name;
			cout<<"\nRno: "<<rno;
		}
};
class BCA:public HJD {
		int nosub,sem;
	public:
		void setdata1(int rn,char nm[],int s,int sm) {
			setdata(rn,nm);
			nosub=s;
			sem=sm;
		}
		void getdata1() {
			getdata();
			cout<<"\nNo of sub: "<<nosub;
			cout<<"\nsem : "<<sem;
			
		}
};
int main() {
	BCA b;
	b.setdata1(34,"Dhara",6,3);
	b.getdata1();
}