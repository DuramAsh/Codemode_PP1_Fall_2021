#include <iostream>
using namespace std;

int Fib(int a){
    if (a == 1) return 0;
    if (a == 2) return 1;
    return Fib(a - 1) + Fib(a - 2);
}

// a_(n) = a_(n - 1) + a_(n - 2)

int main(){
    
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cout << Fib(i) << " ";
    }

    return 0;
}