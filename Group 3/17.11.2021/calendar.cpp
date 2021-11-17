#include <bits/stdc++.h>
using namespace std;

bool compik(pair<pair<int, int>, int> &p1, pair<pair<int, int>, int> &p2){
    if (p1.second == p2.second){
        if (p1.first.second == p2.first.second){
            return p1.first.first < p2.first.first;
        }
        return p1.first.second < p2.first.second;
    }
    return p1.second < p2.second;
}

int main(){

    vector <pair<pair<int, int>, int> > v;
    v.push_back(make_pair(make_pair(13, 5), 2002));
    v.push_back(make_pair(make_pair(12, 5), 2002));
    v.push_back(make_pair(make_pair(13, 10), 2002));
    v.push_back(make_pair(make_pair(20, 04), 1963));
    v.push_back(make_pair(make_pair(21, 10), 2002));

    sort(v.begin(), v.end(), compik);
    
    for (int i = 0; i < v.size(); ++i){
        cout << v[i].first.first << ' ' << v[i].first.second << ' ' << v[i].second << endl;
    }

    return 0;
}