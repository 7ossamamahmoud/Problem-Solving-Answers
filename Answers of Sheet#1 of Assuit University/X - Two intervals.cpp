#include<iostream>
using namespace std;
int main() {
    long L1, R1, L2, R2, E1, E2;
    cin >> L1 >> R1 >> L2 >> R2;
    if (L1 > R2 || L2 > R1 ) 
    {
        cout << -1 << endl;
    }
    else 
    {
        
        if (L1 > L2 && L1 < E2) 
        {
            E1 = L1;
        }
        else if (L2 > L1 && L2 < E2)
        {
            E1 = L2;
        }
        else if (L1 > L2) 
        {
            E1 = L1;
        }
        else if (L2 > L1)
        {
            E1 = L2;
        }
        if (R1<R2)
        {
            E2 = R1;
        }
        else if (R1>R2)
        {
            E2 = R2;
        }
        
        cout << E1 << " " << E2 << endl;
    }
    return 0;
}


