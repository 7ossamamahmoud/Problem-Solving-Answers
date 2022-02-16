#include <iostream>
#include <iomanip>
using namespace std;
double PI = 3.141592653;
int main() {
	cout << fixed << setprecision(9);
	double R,area;
	cin >> R;
	area = double(R *R* PI);
	cout << area << setprecision(9);
 
	return 0;
}