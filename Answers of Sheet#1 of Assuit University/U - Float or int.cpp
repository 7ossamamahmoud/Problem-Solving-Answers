#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(3);
    int X;
    float N, temp;
    cin >> N;
    X = N;
    temp = N - X;
    if (temp > 0)
    {
        cout << "float " << int(N) << " " << temp <<endl;
    }
    else {
        cout << "int " << X << endl;
    }

	return 0;
}
