#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
	if (b == 0)
		return a;
	
	return gcd(b, a % b);
}
int main() {
	long long a, b;
	cin >> a >> b;
	if (a < b) swap(a, b);
	cout << gcd(a, b) << endl;
	return 0;
}