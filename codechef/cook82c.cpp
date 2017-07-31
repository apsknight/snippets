/**
*	Aman Pratap Singh (@apsknight, </www.apsknight.cf>)
*	Indian Institute of Technology Bhubaneswar 
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
#define rep(i, n) for(int i = 0; i < n; i++)
#define fogg(i,a,b) for(int i = (a); i <= (b); i++)
#define ford(i,a,b) for(int i = (a); i >= (b); i--)
#define test int t; cin >> t; while(t--)
#define input ll a[10000000]; ll n; cin >> n; rep(i, n) cin >> a[i]
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define print(x) cout << x << "\n"
#define printsl(x) cout << x << " "
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD 1e9+7

int main() {
	off;
	unsigned long long int n, m;
	cin >> n >> m;
	vector<unsigned long long int> a(n);
	unsigned long long int b[1000006];
	rep(i, n) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	stack<unsigned long long int> st;
	queue<unsigned long long int> q;

	rep(i, n) {
		st.push(a[i]);
	}
	rep(i, m) {
		cin >> b[i];
	}
	unsigned long long int temp = 0;
	unsigned long long int j = 1;
	if(b[temp] == j) {
		print(st.top());
		temp++;
	}
	j++;
	q.push(st.top()/2);
	st.pop();
	while(!st.empty()) {
		if(st.top() >= q.front()) {
			if(st.top()/2 > 0) {
				q.push(st.top()/2);
			}
			if(b[temp] == j) {
				print(st.top());
				temp++;
			}
			j++;
			st.pop();
		}
		else {
			if(q.front()/2 > 0) {
				q.push(q.front()/2);
			}
			if(b[temp] == j) {
				print(q.front());
				temp++;
			}
			j++;
			q.pop();
		}
	}

	while(!q.empty()) {
		if(q.front()/2 > 0) {
			q.push(q.front()/2);
		}
		if(b[temp] == j) {
			print(q.front());
			temp++;
		}
		j++;
		q.pop();
	}

  	return 0;
}