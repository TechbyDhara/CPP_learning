#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {50, 20, 40, 10, 30, 20};
    cout << "\nUnordered set size: " << us.size();
    cout << "\nUnordered set elements: ";
    for (int x : us) {
        cout <<"\t"<< x;
    }
}