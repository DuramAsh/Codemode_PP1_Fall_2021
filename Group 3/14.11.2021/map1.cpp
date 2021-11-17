#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool myComp(pair<string, int> &p1, pair<string, int> &p2){
    if (p1.second == p2.second) return p1.first > p2.first;
    return p1.second < p2.second;
}

int main(){
    freopen("input.txt", "r", stdin);
    map <string, int> m;
    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        m[s] = s.size();
    }
    vector <pair<string, int> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), myComp);
    // sort(v.begin(), v.end());
    // map <string, int> :: iterator it;
    // for (it = m.begin(); it != m.end(); ++it){
    //     cout << (*it).first << ' ' << (*it).second << '\n';
    // }
    for (int i = 0; i < v.size(); ++i){
        cout << v[i].first << ' ' << v[i].second << endl;
    }


    return 0;
}