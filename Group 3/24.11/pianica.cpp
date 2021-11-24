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
    while(!q1.empty() or !q2.empty()){

        if(/* condition */){

        }else if(/* condition for 0 and 9*/){

        }

    }

    if(q1.empty()){
        cout << "First ";
    }else if(q2.empty()){
        cout << "Second ";
    }
    cout << cnt;
    return 0;
}