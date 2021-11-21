#include <bits/stdc++.h>
using namespace std;

bool divT(int a){
    return a % 3 == 0 && a != 0;
}

int main(){

    vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int cnt = 0;
    cnt = count_if(v.begin(), v.end(), divT);
    // for (int i = 0; i < v.size(); ++i){
    //     if (divT(v[i])) cnt++;
    // }
    cout << cnt;
    return 0;
}