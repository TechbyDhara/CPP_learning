#include <iostream>
using namespace std;
template <typename t1,typename t2>
void disp(t1 a,t2 b)
{
    cout<<"\nA: "<<a;
    cout<<"\nB: "<<b;
}
int main()
{
    disp<int,float>(11,34.33);
    
}