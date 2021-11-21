#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector<int> v = {1, 2, 3, 4, 5};
    while(next_permutation(v.begin(), v.end())){
        for (int i = 0; i < v.size(); ++i){
            cout << v[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}