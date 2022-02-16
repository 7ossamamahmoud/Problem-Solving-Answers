#include <iostream>
#include <iomanip>
using namespace std;
void ceill(float A, float B)
{
	if (A / B > int(A / B))
	{
		cout << "ceil " << A << " / " << B << " = " << int(A / B) + 1 << endl;
	}
	else
		cout << "ceil " << A << " / " << B << " = " << int(A / B) << endl;
}
 
void floorr(float A, float B)
{
	if ((A / B) >= int(A / B))
	{
		cout << "floor " << A << " / " << B << " = " << int(A / B) << endl;
	}
}
void roundd(float A, float B)
{
 
	if (A / B >= (int(A / B)) + 0.50)
	{
		cout << "round " << A << " / " << B << " = " << int(A / B) + 1 << endl;
	}
	else
		cout << "round " << A << " / " << B << " = " << int(A / B) << endl;
}
 
int main() {
	float A, B;
	cin >> A >> B;
	floorr(A, B);
	ceill(A, B);
	roundd(A, B);
   
	return 0;
}