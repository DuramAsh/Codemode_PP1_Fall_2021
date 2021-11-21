#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    while(prev_permutation(v.begin(), v.end())){
        for (int i = 0; i < v.size(); ++i){
            cout << v[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}