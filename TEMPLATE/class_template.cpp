#include <iostream>
using namespace std;
template <typename t1,typename t2>
class stud
{
t1 rno;
t2 per;
public:
stud(t1 a,t2 b):rno(a),per(b){}
void disp()
{
    cout<<"\nRoll no: "<<rno;
    cout<<"\npercentage: "<<per;
}
};
int main()
{
    stud<int,float>s1(1,98.33);
    s1.disp();
}