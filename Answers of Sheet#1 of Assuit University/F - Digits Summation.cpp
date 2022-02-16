#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	long long N, M,digit;
	cin >> N>> M;
	digit = N % 10 + M %10;
	cout << digit;
 
	return 0;
}