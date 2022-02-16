#include<iostream>
using namespace std;
int main() {
    long long A, B, C, D, RES, digit;
    cin >> A >> B >> C >> D;
    RES = (A%100) * (B%100) * (C%100) * (D%100);
    digit = RES % 100;
    if (digit < 10)
        cout << "0" << digit << endl;
    else
        cout << digit << endl;
   
    return 0;
}


