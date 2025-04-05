#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
	if (n == 1 || n == 0) return 1;
	return n * factorial(n - 1);
}

int fibonacci(int n) {
	cout << "fibonacci: " << n << '\n';
	if(n == 0 || n == 1) return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int n = 5;

int main() {
	cout << factorial(n) << " " << fibonacci(n) << '\n';

	return 0;
}
