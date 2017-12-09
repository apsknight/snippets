#include <iostream>
using namespace std;

typedef long long ll;

ll C(int n, int r) {
	if (r > n / 2) r = n - r;

	ll ans = 1;

	for (int i = 1; i <= r; i++) {
		ans *= n - r + i;
		ans %= 1000000007;
		ans /= i;
	}

	return ans;
}

int main() {
	int n, r;
	cin >> n >> r;

	cout << C(n, r) << "\n";
	return 0;
}