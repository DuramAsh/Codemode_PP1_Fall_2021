#include <iostream>
#include <algorithm>
using namespace std;

void myReverse(string &s, int begin, int end){
    if (begin >= end) return;
    swap(s[begin], s[end]);
    myReverse(s, begin + 1, end - 1);
}

string myReverses(string s, int begin, int end){
    if (begin >= end) return s;
    swap(s[begin], s[end]);
    return myReverses(s, begin + 1, end - 1);
}

int main(){
    string s;
    cin >> s;
    myReverse(s, 0, s.size() - 1);
    cout << s;
}