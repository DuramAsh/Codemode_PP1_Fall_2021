#include<iostream>
#include<queue>
#include<stack>
#include<map>
using namespace std;
int main(){

    stack<int> pizzas;
    queue<pair<string, int>> clients;
    map<int,int> all_pizzas;

    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        int pizza;
        cin >> pizza;
        pizzas.push(pizza);
        all_pizzas[pizza]++;
    }
    for(int i=0;i<n;i++){
        int client;
        cin >> client;
        clients.push(make_pair("not",client));
    }
    clients.push(make_pair("Alima",1));
    bool ok = false;
    int time = 0;
    while(!pizzas.empty()){
        time++;
        if(all_pizzas[1] == 0) //1  
            break;// 1T 0 
        if(pizzas.top() == 1 && clients.front().first == "Alima"){
            ok = true;
            break;
        }else if(pizzas.top() == clients.front().second && clients.front().first == "not"){
            clients.pop();
            all_pizzas[pizzas.top()]--;
            pizzas.pop();
        }else{
            pair<string,int> pr = clients.front();
            clients.pop();
            clients.push(pr);
        }
    }
    if(ok){
        cout<<"YES\n";
        if(time>m)
            cout<<"Che opazdyvaem?\n";
    }else{
        cout<<";(\n";
    }
    return 0;
}