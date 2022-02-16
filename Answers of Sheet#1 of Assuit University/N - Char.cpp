#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	char X;
	cin >> X;
	if (X>=65 && X<=96)
	{
		X= X + 32;
		cout <<char(X);
	}
	else if (X>=97 && X<=127)
	{
		X = X - 32;
		cout << char(X);
	}
	return 0;
}