#include <iostream>
using namespace std;

void multiply(int* a, int& n, int mult) {
	int carry = 0;
	for(int i = 0; i < n; i++) {
		int product = a[i]*mult + carry;
		a[i] = product % 10;
		carry = product / 10;
	}

	while(carry) {
		a[n] = carry % 10;
		carry /= 10;
		n++;
	}
}

void factorial(int number) {
	int *a = new int[1000]{0};

	a[0] = 1;
	int n = 1;

	for(int i = 2; i <= number; i++) {
		multiply(a, n, i);
	}
	for(int i = n-1; i >= 0; i--) {
		cout << a[i];
	}
	cout << "\n";
}
int main() {
	int n;
	cin >> n;

	factorial(n);

	return 0;
}