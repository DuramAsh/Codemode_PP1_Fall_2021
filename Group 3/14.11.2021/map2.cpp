#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool compar(pair<string, int> &p1, pair<string, int> &p2){
    return p1.second < p2.second;
}

int main(){
    freopen("input.txt","r",stdin);
    int n; cin >> n;
    map<string, int> m;

    for(int i = 0; i < n; ++i){
        string product;
        int cost;
        cin >> product >> cost;
        m[product] = cost;
    }
    map <string, int> bill;
    int k; cin >> k;
    for(int i = 0; i < k; ++i){
        string product;
        int quantity;
        cin >> product >> quantity;
        bill[product] = m[product] * quantity;
    }
    // vector <pair<string, int> > v(bill.begin(), bill.end());
    vector <pair<string, int> > v;
    map <string, int> :: iterator it;
    for (it = bill.begin(); it != bill.end(); it++){
        v.push_back(*it);
    }
    sort(v.begin(), v.end(), compar);
    for (int i = 0; i < v.size(); ++i){
        cout << v[i].first << ' ' << v[i].second << endl;
    }
    return 0;
}