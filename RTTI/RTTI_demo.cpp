#include <iostream>
#include <typeinfo>
using namespace std;

class A {
public:
    virtual void disp() 
    { 
        cout << "Method of Class A\n"; 
    }
};

class B : public A {
public:
    void disp() 
    { 
        cout << "Method of Class B\n"; 
    }
};

class C : public A {
public:
    void disp() 
    {
         cout << "Method of Class C\n"; 
    }
};

int main() {
    A *ptr=new B();
    if (typeid(*ptr) == typeid(B))
        cout << "Pointer is pointing to B\n";
    else
        cout << "Pointer is pointing to A\n";
    ptr->disp();

   ptr=new C();
    if (typeid(*ptr) == typeid(C))
        cout << "Pointer is pointing to C\n";
    else
        cout << "Pointer is pointing to A\n";
    ptr->disp();

    return 0;
}
