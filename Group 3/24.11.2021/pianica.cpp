#include <bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q1,q2;

    for(int i = 0; i < 5; ++i){
        int x; cin >> x;
        q1.push(x);
    }

    for(int i = 0; i < 5; ++i){
        int x; cin >> x;
        q2.push(x);
    }

    int cnt = 0;
    while(cnt <= 1000000 and (!q1.empty() or !q2.empty())){
    
        if(q1.front() > q2.front() ||
            (q1.front() == '0' && q2.front() == '9')){
                /* YOUR CODE */
        }
        else if(q1.front() < q2.front() ||
            (q1.front() == '9' && q2.front() == '0')){
                /* YOUR CODE */
        }
        cnt++;
    }

    if(cnt >= 1000000){
        cout << "botva";
    }
    else if(q1.empty()){
        cout << "First " << cnt;
    }else if(q2.empty()){
        cout << "Second " << cnt;
    }
    
    return 0;
}