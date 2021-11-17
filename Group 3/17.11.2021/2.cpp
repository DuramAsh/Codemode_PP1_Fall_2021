#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue <int> q;
    q.push(22);
    q.push(41);
    q.push(65);
    q.push(555);

    while(!q.empty()){
        cout << q.front() << " " << q.back() << '\n';
        q.pop();
    }

    return 0;
}