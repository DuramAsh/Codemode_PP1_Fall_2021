#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {1, 2, 2, 3, 4, 7, 8, 8, 9};
    vector<int> :: iterator it;
    it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    for (int i = 0; i < v.size(); ++i){
        cout << v[i] << ' ';
    }

    return 0;
}