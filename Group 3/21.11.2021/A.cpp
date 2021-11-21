#include <iostream>
#include <queue>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n, m;
    cin >> n >> m;
    queue<pair<string, float>> q;

    while(n--){
        string s;
        float p;
        cin >> s >> p;
        q.push(make_pair(s,p));
    }

    vector<string> ans;


    while(ans.size() < m){
        
        pair<string, float> current = q.front();
        q.pop();

        if(current.second > q.front().second){
            ans.push_back(current.first);
        }else{
            q.push(current);
        }

    }

    for(auto i : ans){
        cout << i << endl;
    }

}