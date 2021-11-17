#include <bits/stdc++.h>
using namespace std;

bool comp(pair <string, int> &p1, pair <string, int> &p2){
    return p1.second > p2.second;
}

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

    cout << v[v.size() - 1].size();
    
    // map <string, int> m;
    // for (int i = 0; i < v.size(); ++i){
    //     m[v[i]]++;
    // }
    // vector <pair<string, int> > vv;
    // map<string, int> :: iterator it;
    // for (it = m.begin(); it != m.end(); ++it){
    //     vv.push_back(*it);
    // }
    // sort(vv.begin(), vv.end(), comp);
    // for (int i = 0; i < vv.size(); ++i){
    //     cout << vv[i].first << " : " << vv[i].second << endl;
    // }

    return 0;
}