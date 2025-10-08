#include <iostream>
using namespace std;
int main()
{
    int ch;
	cout<<"\n1.out of range\n2.Invalid argument";
	cout<<"Choose any one: \n\n";
	cin>>ch;
	try{
		if (ch==1)
		{
			throw out_of_range("Out of rangeeeeeeeeeeeeeeeeee");
		}
		else if(ch==2){
			throw invalid_argument("Argument is invaidddddd");
		}
		else{
			cout<<"\n\nInvalid choiceeeeeee";
		}
	}
	catch(out_of_range o)
	{
		cout<<o.what();
	}
	catch(invalid_argument i)
	{
		cout<<i.what();
	}
	
}