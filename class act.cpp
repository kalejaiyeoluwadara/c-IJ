// #include <iostream>
// #include "sl.cpp"
// #include "al.cpp"
// using namespace std;
// double Sl();
// void Al();
// int main()
//{
//	double bs = 2000;
//	cout << "Net pay is: " << Sl(bs) << endl;
//	Al();
// }

#include <iostream>
using namespace std;

void harvestScore(int arr[9])
{

	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}
}
float calculateGpa(int arr[9])
{
	float sum = 0;
	float gpa;
	for (int i = 0; i < 9; i++)
	{
		sum += arr[i];
	}
	float avg = sum / 9.0;
	cout << "avg score: " << avg << endl;
	return avg;
}
float showGpa(float num)
{
	float gpa;
	if (num >= 80)
	{
		gpa = 5.0;
	}
	else if (num >= 70)
	{
		gpa = 4.0;
	}
	else if (num > 60)
	{
		gpa = 3.5;
	}
	else if (num >= 50)
	{
		gpa = 3.0;
	}
	else
	{
		cout << "Variable error\n";
	}

	return gpa;
}

int main()
{
	int score[9] = {90, 80, 60, 70, 50, 20, 90, 80, 90};
	harvestScore(score);
	float cgpa = calculateGpa((score));
	cout << "Your CGPA is: " << showGpa(cgpa) << endl;
}

// #include <iostream>
// using namespace std;

// int main()
//{
//  BU Receipt
//  ----------------
//  Ice-cream   #300
//  Polish     #600
//  Bread     #1000

// cout << "BU Receipt\n";
// cout << "-------------\n";
// cout << "Ice-cream\t300\n";
// cout << "Polish\t\t600\n";
// cout << "Bread\t\t1000\n";

// string userName;
// string admin = "Dammy";
// cout << "Enter user name: \n";
// cin >> userName;
// if (userName == admin)
// {
// 	cout << "Welcome admin " << admin << endl;
// }
// else
// {
// 	cout << "welcome " << userName << endl;
// }

// enter first number
// enter second number
// enter the operator

// sum of numbers is sum

// 	int a, b;
// 	float sum;
// 	char op;
// 	cout << "input the first number\n";
// 	cin >> a;
// 	cout << "input the second number\n";
// 	cin >> b;
// 	cout << "input the operator\n";
// 	cin >> op;

// 	if (op == '+')
// 	{
// 		sum = a + b;
// 		cout << "sum of " << a << " and " << b << " is " << sum << endl;
// 	}
// 	else if (op == '-')
// 	{
// 		sum = a - b;
// 		cout << "Subraction of " << a << " and " << b << " is " << sum << endl;
// 	}
// 	else if (op == '*')
// 	{
// 		sum = a * b;
// 		cout << "Multiplication of " << a << " and " << b << " is " << sum << endl;
// 	}
// 	else if (op == '/')
// 	{
// 		sum = a / b;
// 		cout << "Division of " << a << " and " << b << " is " << sum << endl;
// 	}
// 	else
// 	{
// 		cout << "Operator not found\n";
// 	}
// }
