#include <iostream>
using namespace std;

int main()
{
	//Task1
	
	int a; 
	int sum = 0;

	cout << "Enter first number : ";
	cin >> a;

	for (int i = a; i < 500; i++)
	{
		sum += a;
	}
	cout << "Sum numbers a<500 : " << sum << endl;

	//Task2

	int x, y;
	int result = 1;

	cout << "Enter x: ";
	cin >> x;

	cout << "Enter the y: ";
	cin >> y;

	for (int i = 0; i < y; i++) 
	{
		result *= x;
	}

	cout << x << " Znachenja" << y << " = " << result << endl;

	//Task3

	int sum = 0;
	int count = 0;

	for (int i = 1; i <= 1000; i++) {
		sum += i;
		count++;
	}
	double average = sum / double(count);
	cout << "Seredne arifmatichne:" << average << endl;

	//Task4

	int a;
	int product = 1;

	cout << "Enter number( 1 <= a <= 20) : ";
	cin >> a;

	if (a < 1 || a > 20) {
		cout << "Enter number in the range from 1 to 20" << endl;
	}
	for (int i = a; i <= 20; ++i) {
		product *= i;
	}

	cout << "Dobytok " << a << " to 20: " << product << endl;

	//Task5
	int i = 1,num = 0,sum = 0;
	cin >> num;

	while (i<11)
	{
		cout << num << " * " << i << "=" << num * i<< endl;
		i++;
	}
	//task6
	int count = 0;

	for (int i = 100; i < 1000; ++i) 
	{
		int hundreds = i / 100;
		int tens = (i / 10) % 10;
		int ones = i % 10;
		if (hundreds == tens || hundreds == ones || tens == ones) {
			count++;
		}
	}
	cout << "Numbers from 100 to 999: " << count << endl;
	//task7
	int count = 0;

	for (int i = 100; i < 1000; ++i)
	{
		int hundreds = i / 100;
		int tens = (i / 10) % 10;
		int ones = i % 10;
		if (hundreds != tens || hundreds != ones || tens != ones) {
			count++;
		}
	}
	cout << "Numbers from 100 to 999: " << count << endl;

}

