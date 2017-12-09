void subseq(string s) {
	int n = s.length();

	for(int i = 0; i < (1 << n); i++) {
		int temp = i;
		int j = 0;
		while(temp > 0) {
			cout << (temp & 1) ? a[j++]:"";
			temp = temp >> 1;
		}
		cout << endl;
	}
}