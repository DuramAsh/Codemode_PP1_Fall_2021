#include <iostream>
using namespace std;

int degreeTwo(int x){
    if(x == 0) return 1;
    else return degreeTwo(x - 1) * 2;
    // cout << degreeTwo(x - 1) * 2 << '\n';
    // cout << "The degree of " << x << " is 2 * 2^" << x - 1 << '\n'; 
}

// int ddegreeTwo(int x){
//     cout << x << " ";
//     return degreeTwo(x - 1) * 2;
//     if (x == 0) return 1;
// }

// 2^7 = 64 * 2 = 128
// 2^6 = 32 * 2 = 64
// 2^5 = 16 * 2 = 32
// .
// .2^3 = 4 * 2
// .2^2 = 2 * 2
// 2^1 = 1 * 2 = 2
// 2^0 = 1

// stop condition
// common case
// 


int main(){

    int a;
    cin >> a;
    cout << degreeTwo(a);

    return 0;
}