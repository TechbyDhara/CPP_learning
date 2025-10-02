#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << "\nTop element: " << st.top();
    cout << "\nStack size: " << st.size();
    st.pop();
   cout<<"\npoped first element......st.pop() ";
    cout << "\nStack elements: ";
    while (!st.empty()) {
        cout <<"\t"<< st.top();
        st.pop();
    }
    return 0;
}
