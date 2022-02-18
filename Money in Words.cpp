#include <iostream>
using namespace std;
void less_Billion(int n);
int main()
{

	    int number;
		cout << "(Enter number ,please)" << endl;
		cin >> number;
		less_Billion(number);
	
	
}
void fun1(int n)
{
	switch (n)
	{
	case 1:
		cout << "One ";
		break;
	case 2:
		cout << "Two ";
		break;
	case 3:
		cout << "Three ";
		break;
	case 4:
		cout << "Four ";
		break;
	case 5:
		cout << "Five ";
		break;
	case 6:
		cout << "Six ";
		break;
	case 7:
		cout << "Seven ";
		break;
	case 8:
		cout << "Eight ";
		break;
	case 9:
		cout << "Nine ";
		break;
	}
}
void fun2(int n)
{
	switch (n)
	{
	case 10:
		cout << "Ten ";
		break;
	case 11:
		cout << "Eleven ";
		break;
	case 12:
		cout << "Twelve ";
		break;
	case 13:
		cout << "Thirteen ";
		break;
	case 14:
		cout << "Forteen ";
		break;
	case 15:
		cout << "Fifteen ";
		break;
	case 16:
		cout << "Sixteen ";
		break;
	case 17:
		cout << "Seventeen ";
		break;
	case 18:
		cout << "Eighteen ";
		break;
	case 19:
		cout << "Nineteen ";
		break;
	}
}
void fun3(int n)
{
	switch (n)
	{
	case 2:
		cout << "twenty ";
		break;
	case 3:
		cout << "Thirty ";
		break;
	case 4:
		cout << "Forty ";
		break;
	case 5:
		cout << "Fifty ";
		break;
	case 6:
		cout << "Sixty ";
		break;
	case 7:
		cout << "Seventy ";
		break;
	case 8:
		cout << "Eighty ";
		break;
	case 9:
		cout << "Ninety ";
		break;
	}
}
void less_100(int n)
{
	if (n < 10)
		fun1(n);
	else if (n < 20)
		fun2(n);
	else if (n<100)
	{
	
		fun3(n/10);		
		fun1(n%10);
	}
}
void less_1000(int n)
{
	if (n < 100)
		less_100(n);
	else
	{
		less_100(n/100);
		cout << "Hundred ";
		less_100(n%100);
	}
}
void less_1000000(int n)
{
	if (n < 1000)
		less_1000(n);
	else
	{
		less_1000(n/1000);
		cout << "Thousand ";
		less_1000(n%1000);
	}
}
void less_Billion(int n)
{
	if (n == 0)
		cout << "Zero ";
	else if (n<1000000)
	less_1000000(n);
	else
	{
		less_1000000(n/1000000);
		cout << "Million ";
		less_1000000(n%1000000);
	}

}