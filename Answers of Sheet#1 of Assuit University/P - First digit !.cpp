#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int X,digit,rem;
	cin >> X;
	digit = X/ 1000;
	if (digit % 2 == 0 )
	{
		cout << "EVEN";
	}
	else
	{
		cout << "ODD";
	}
	return 0;
}