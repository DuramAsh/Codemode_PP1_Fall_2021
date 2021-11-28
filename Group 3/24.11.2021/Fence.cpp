#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    stack<int> st;
    for(int i = 0; i < n; ++i){

        int k; cin >> k;

        while( !st.empty()  && k > st.top()){
            st.pop();
        }

        st.push(k);

    }

    cout << st.size() << endl;

    return 0;
}