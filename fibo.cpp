// nicholas nojiri
// CECS 325
//  Due 9/04/2025

#include <iostream>
#include <string>
using namespace std;

int fibo(int n) {
	if (n == 1 or n == 0)
		return 1;
	else
		return fibo(n-1) + fibo(n - 2);
}

int main() {
	string name;
	int number;

	cout << "what is your name? :" << endl;
	cin >> name;

	cout <<"what is your favorite number " << endl;
	cin >> number;

	cout << "Welcome to class " << name << endl;
	for(int i = 0; i <= 20; i++)
{
		cout << i << ":" << fibo(i) << endl;
}
	return 0;
}
