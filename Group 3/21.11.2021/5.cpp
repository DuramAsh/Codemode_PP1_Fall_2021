#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(int a){
    cout << a << ' ';
}

void square(int &a){
    a *= a;
}

int main(){

    vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    // for (int i = 0; i < v.size(); ++i){
    //     print(v[i]);
    // }    
    for_each(v.begin(), v.end(), print);
    cout << '\n';
    for_each(v.begin(), v.end(), square);
    for_each(v.begin(), v.end(), print);

    return 0;
}