#include <bits/stdc++.h>
using namespace std;

int main(){

    string s; cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); ++i){

        if(s[i] == '(' or s[i] == '[' or s[i] == '{'){
            st.push(s[i]);
        }
        else if(s[i] == ')' and st.top() == '(' or
        s[i] == ']' and st.top() == '[' or
        s[i] == '}' and st.top() == '{' and !st.empty()){
            st.pop();
        }else if(s[i] == ')' and st.top() == '(' or
        s[i] == ']' and st.top() == '[' or
        s[i] == '}' and st.top() == '{' and st.empty()){
            cout << "No" << endl;
            return 0;
        }

    }

    
    if(st.empty()){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}