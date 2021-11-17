#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        m[x]++;
    }
    map<int, int> :: iterator it = m.begin();
    for (it; it != m.end(); ++it){
        cout << (*it).first << ' ' << (*it).second << endl;
    }

    return 0;
}