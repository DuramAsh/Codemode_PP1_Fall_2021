#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    multimap <int, int> mm;
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i){
        int q, w;
        cin >> q >> w;
        mm.insert(make_pair(q + w, i));
    }

    for (auto &i: mm){
        cout << i.second << ' ' << i.first << '\n';
    }


    return 0;
}