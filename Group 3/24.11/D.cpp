#include <bits/stdc++.h>
using namespace std;


int total(string s1, string s2){

    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < s1.size(); ++i){
        sum1 += int(s1[i]);
    }
    for(int i = 0; i < s2.size(); ++i){
        sum2 += int(s2[i]);
    }

    return sum1 - sum2;
}

bool comp(pair<pair<string, string>, int> & p1, pair<pair<string, string>, int> & p2){
    if(p1.second == p2.second){
        if(p1.first.first != p2.first.first){
            return p1.first.first > p2.first.first;
        }else{
            return p1.first.second > p2.first.second;
        }
    }else{
        return p1.second > p2.second;
    }
}

int main(){

    int n; cin >> n;
    vector<pair<pair<string, string>, int>> v;
    for(int i = 0; i < n; ++i){
        string f_name, s_name;
        cin >> f_name >> s_name;
        v.push_back(make_pair(make_pair(f_name, s_name), total(f_name, s_name)));
    }

    //sort(v.begin(), v.end(), comp);
    sort(v.begin(), v.end());
    for(auto i : v){
        cout << i.first.first << " " << i.first.second << " " << i.second << endl;
    }
    
}