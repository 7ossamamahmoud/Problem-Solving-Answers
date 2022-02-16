#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long A, B,C, D;
    // unsigned long long result_A = 1;
    //unsigned long long result_C = 1;
    cin >> A >> B >> C >> D;
    if (A == C && B == D)
    {
        cout << "NO";
    }
    else if (B == D)
    {
        if (A > C)
            cout << "YES" <<endl;
        else
            cout << "NO" <<endl;
    }
    else if (B * log(A) > D * log(C))
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }

     // Another Way equivalent to the 2nd else if but worse than it
    /*for (int i = 0; i < B; ++i)
    {
        result_A *= A;
    }
    for (int i = 0; i < D; ++i)
    {
        result_C *= C;
    }*/
   /* else if (result_A > result_C)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;*/
   
    
    return 0;
    
}


