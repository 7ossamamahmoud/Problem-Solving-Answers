#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	long long A, B,C,min=99999,max=-111111;
	cin >> A >> B>>C;
	if (A < min )
		min=A;
	if (B < min)
		min = B;
	if (C < min)
		min=C;
 
	if (A > max)
		max = A;
	if (B > max)
		max = B;
	if (C > max)
		max=C;
 
		cout << min<< " "<<max;
	return 0;
}