#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc,char *argv[])
{
    int sum=0;
   for(int i=0;i<argc;i++)
   {
        cout<<"\nperameter:"<<i+1<<argv[i];
        sum=sum+argv[i];
   }
   cout<<"\nSum : "<<sum;

}