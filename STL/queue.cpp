#include <iostream>
#include <queue> 
using namespace std;
int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout << "\nFront element: " << q.front();
    cout << "\nBack element: " << q.back();
    cout << "\nQueue size: " << q.size();
    q.pop(); cout<<"\npoped first element......q.pop() ";
    cout << "\nQueue: ";
    while (!q.empty()) {
        cout <<"\t"<< q.front();
        q.pop();
    }
    return 0;
}
