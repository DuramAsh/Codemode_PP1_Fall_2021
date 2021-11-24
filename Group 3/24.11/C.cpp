#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<int> st;
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        char x; cin >> x;
        if('0' <= x and x <= '9'){

            st.push(x - 48);

        }else if(x == 'C'){

            st.pop();

        }else if(x == 'D'){

            st.push(2 * st.top());

        }else if(x == '+'){
            int first = st.top();
            st.pop();
            int second = st.top();
            st.push(first);
            st.push(first + second);
        }
    }

    int sum = 0;
    while(!st.empty()){
        sum += st.top();
        st.pop();
    }

    cout << sum << endl;

    
}