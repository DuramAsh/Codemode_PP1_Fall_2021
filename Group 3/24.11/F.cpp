#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m; cin >> n;
    queue<string> q1,q2;
    for(int i = 0; i < n; ++i){
        string s; cin >> s;
        q1.push(s);
    }

    cin >> m;
    for(int i = 0; i < m; ++i){
        string s; cin >> s;
        q2.push(s);
    }
    int cnt = 0;
    while(!q2.empty() and cnt < 15){
        if(q1.front() == q2.front()){
            q1.pop();
            q2.pop();
            cnt++;
        }else{
            q1.push(q1.front());
            q1.pop();
            cnt++;
        }
    }

    if(cnt <= 14){
        cout << "Shara dovolen in: " << cnt << " days" << endl;
    }else{
        cout << "Shara is crying((" << endl;
    }

}