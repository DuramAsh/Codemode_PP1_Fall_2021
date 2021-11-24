#include <bits/stdc++.h>
using namespace std;

int main(){

    map<string, vector<string>> ls;
    vector<string> ans;

    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        string country; cin >> country;

        int m; cin >> m;
        vector<string> temp;
        for(int j = 0; j < m; ++j){
           string city; cin >> city;
            temp.push_back(city);
        }

        ls.insert(make_pair(country, temp));
    }


    int k; cin >> k;

    map<string, vector<string>> :: iterator it;

    bool founded = false;
    while(k--){
        string city;
        cin >> city;

        for(it = ls.begin(); it != ls.end(); it++){
            vector<string> v(it->second.begin(), it->second.end());
            if(find(v.begin(), v.end(), city) != v.end()){
                cout << it->first << endl;
                founded = true;
                break;
            }
        }

        if(!founded){
            cout << "Ondai joq" << endl;
        }
        founded = false;
    }

}