#include <iostream>
using namespace std;

int fib(int a){
    if (a == 1) return 0;
    if (a == 2) return 1;
    return fib(a -  1) + fib(a - 2);
}

int main(){

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cout << (fib(i)) << ' ';
    }

    return 0;
}