#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	long long N,result;
	cin >> N;
	result = (N * (N + 1)) / 2;
	cout << result;
	return 0;
}