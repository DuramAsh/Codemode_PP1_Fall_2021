#include <iostream>
using namespace std;

char maxdigi = '0';

char maxDig2(string s, int i){
    if (i == s.size()) return maxdigi; 
    if (s[i] > maxdigi) maxdigi = s[i];
    return maxDig2(s, i + 1);
}
char maxDig1(string t){
    char maxdigit = '0';
    for (int i = 0; i < t.size(); ++i){
        if (t[i] > maxdigit){
            maxdigit = t[i];
        }
    }
    return maxdigit;
}

int main(){
    string s;
    cin >> s;
    cout << maxDig1(s) << endl;
    cout << maxDig2(s, 0);

    return 0;
}