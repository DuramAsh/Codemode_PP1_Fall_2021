#include <iostream>
using namespace std;



int sumDig(string s, int i){
    if (i == s.size()) return 0;
    return int(s[i] - 48) + sumDig(s, i + 1);
}

// 132746 -> 1 + sumDig(32746) -> 1 + 3 + sumDig(2746) -> ... -> 1 + 3 + 2 + 7 + 4 + 6 

int main(){
    string s;
    cin >> s;
    cout << sumDig(s, 0);
    return 0;
}