#include <iostream>
using namespace std;

bool isPowerOfTwo(int a){
    if (a == 1) return true;
    if (a % 2 != 0 || a == 0) return false;
    return isPowerOfTwo(a / 2);
}

int main(){
    int n;
    cin >> n;
    cout << ((isPowerOfTwo(n)) ? "YES" : "NO");
}