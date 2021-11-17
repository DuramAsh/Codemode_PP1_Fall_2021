#include <iostream>
#include <queue>
using namespace std;

bool isVowel(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    return false;
}

int main(){

    queue <char> q;
    int cnt = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        q.push(s[i]);
    }

    while(!q.empty()){
        if (isVowel(q.front())){
            cout << q.front() << ' ';
            break;
        }
        cnt++;
        q.pop();
    }
    cout << cnt;

    // cout << q.size() << '\n';
    // cout << q.front() << '\n';
    // cout << q.back() << '\n';

    return 0;
}