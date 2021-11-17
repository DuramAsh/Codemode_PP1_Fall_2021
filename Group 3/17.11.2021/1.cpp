#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack <int> st;
    st.push(5);
    st.push(2);
    st.push(-4);
    st.push(12);
    
    while(!st.empty()){
        printf("The size of the stack is: %d\nThe top element is: %d\n", st.size(), st.top());
        st.pop();
    }

    return 0;
}