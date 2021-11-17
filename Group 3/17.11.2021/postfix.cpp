#include <iostream>
#include <stack>
using namespace std;

bool isDigit(char a){
    return ('0' <= a && a <= '9');
}

int main(){
    freopen("input.txt", "r", stdin);
    stack <int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        char c;
        cin >> c;
        if (isDigit(c)) st.push(int(c - 48));
        else if (c == '*'){
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            st.push(first * second);
        } else if (c == '+'){
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            st.push(first + second);
        }
    }

    cout << st.top();

    return 0;
}