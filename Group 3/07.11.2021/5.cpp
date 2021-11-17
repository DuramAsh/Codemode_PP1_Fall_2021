#include <iostream>
using namespace std;
int summa2;
int heater2(int a){
    if (a == 0) return summa2;
    summa2 += (a % 10) / 2;
    return heater2(a / 10);
}

int heater(int a){
    int summa = 0;
    while (a != 0){
        summa += (a % 10) / 2;
        a /= 10;
    }
    return summa;
}

int main(){

    int x;
    cin >> x;
    cout << heater(x) << '\n' << heater2(x);

    return 0;
}