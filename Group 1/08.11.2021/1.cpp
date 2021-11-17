#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set <int> ss;
    while(n--){
        string s;
        cin >> s;
        if (s == "ADD"){
            int x;
            cin >> x;
            ss.insert(x);
        } else if (s == "PRESENT"){
            int x;
            cin >> x;
            if (ss.find(x) == ss.end()){
                cout << "NO" << '\n';
            } else cout << "YES" << '\n';
        } else if (s == "COUNT"){
            cout << ss.size() << '\n';
        }
    }
}
