#include <iostream>
#include <stack>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    stack <char> st;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == '('){
            st.push(s[i]);
        } else if (s[i] == ')' && !st.empty()){
            st.pop();
        } else if (s[i] == ')' && st.empty()){
            cout << "NO";
            return 0;
        }
    }
    
    // cout << (st.empty() ? "YES" : "NO");
    if (st.empty()){
        cout << "YES";
    } else cout << "NO";

    return 0;
}