// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int s = 0;
	cin >> a >> b;
	for (int i = a; i <= b; ++i)
	{
		s++;
		cout << i << " ";
	}
	cout <<endl<< s;
}


