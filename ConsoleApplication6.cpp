#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	unsigned n,k;
	cin >> n;
	k = n;
	while ((k*k)>n)
	{
		--k;
	}
	cout << k;
}




