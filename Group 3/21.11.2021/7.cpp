#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // {7, 6, 5, 4, 3, 2, 1, 0, 9, 8}

    // rotate(v.begin(), v.begin() + 3, v.end());
    for (int i = 0; i < v.size(); ++i){
        cout << v[i] << ' ';
    }

    return 0;
}