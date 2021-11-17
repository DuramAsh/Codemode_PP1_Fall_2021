#include <iostream>
#include <vector>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    string s;
    getline(cin, s);
    vector <string> v;
    string temp = "";
    for (int i = 0; i < s.size(); ++i){
        temp += s[i];
        if (s[i] == ' ' || i == s.size() - 1){
            v.push_back(temp);
            temp = "";
        }
    }
    for (auto &i : v) cout << i << ' ';

    return 0;
}