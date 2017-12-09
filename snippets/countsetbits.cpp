int bits(int n) {
	int ans = 0;
	while(n) {
		n = n & (n-1);
		++ans;
	}

	return ans;
}