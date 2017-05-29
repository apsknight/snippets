#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;

		for(int i = 0; i < m; i++) {
			int u, v;
			cin >> u >> v;
		}

		if (n % 2 == 0)
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}

	return 0;
}