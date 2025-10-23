#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
public:
    Student(string n, int a) {
        name = n;
        age = a;
    }

    friend ostream& operator << (ostream &out,Student &s);

};

ostream& operator << (ostream &out, const Student &s) {
    out << "Name: " << s.name << ", Age: " << s.age;
    return out;  
}
int main() {
    Student s1("Dhara", 20);
    cout << s1;   
    return 0;
}


