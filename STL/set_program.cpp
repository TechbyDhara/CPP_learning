#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s = {10, 20, 90, 40, 50, 20};
    cout << "\nSet size: " << s.size();
    cout << "\nSet elements: ";
    for (int x : s) {
        cout <<"\t"<< x;
    }
}