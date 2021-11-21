#include <bits/stdc++.h>
using namespace std;
int a = 0;
int fun(){
    int temp = a;
    a++;
    return pow(temp, temp);
}

void filler(int &a){
    a = pow(a, a);
}

int main(){

    vector<int> v = {1, 2, 3, 4, 5};
    generate(v.begin(), v.end(), fun);
    for_each(v.begin(), v.end(), filler);
    for (int i = 0; i < v.size(); ++i){
        cout << v[i] << ' ';
    }


    return 0;
}