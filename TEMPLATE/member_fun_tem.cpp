#include <iostream>
using namespace std;
template <typename t1,typename t2>
class stud
{
t1 rno;
t2 per;
public:
void setdata(t1 a,t2 b)
{
    rno=a;
    per=b;
}
void disp()
{
    cout<<"\nRoll no: "<<rno;
    cout<<"\npercentage: "<<per;
}
void show(t1 a,t2 b)
{
    cout<<"\nA: "<<a;
    cout<<"\nB: "<<b;
}
};
int main()
{
    stud<int,float>s1;
    s1.setdata(1,98.33);
    s1.disp();
    s1.show(11,22.3);
}