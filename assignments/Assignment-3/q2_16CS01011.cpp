/***
 *                                    _____           _                 _____ _             _     
 *      /\                           |  __ \         | |               / ____(_)           | |    
 *     /  \   _ __ ___   __ _ _ __   | |__) | __ __ _| |_ __ _ _ __   | (___  _ _ __   __ _| |__  
 *    / /\ \ | '_ ` _ \ / _` | '_ \  |  ___/ '__/ _` | __/ _` | '_ \   \___ \| | '_ \ / _` | '_ \ 
 *   / ____ \| | | | | | (_| | | | | | |   | | | (_| | || (_| | |_) |  ____) | | | | | (_| | | | |
 *  /_/    \_\_| |_| |_|\__,_|_| |_| |_|   |_|  \__,_|\__\__,_| .__/  |_____/|_|_| |_|\__, |_| |_|
 *  16CS01011, Github: @apsknight                             | |                      __/ |      
 *  Indian Institute of Techology Bhubaneswar                 |_|                     |___/       
 *  https://github.com/apsknight/snippets/tree/master/assignments/10%20August%202017
 */
 
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string st;
typedef vector<int> vi;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define fogg(i,a,b) for(int i = (a); i <= (b); ++i)
#define ford(i,a,b) for(int i = (a); i >= (b); --i)
#define test int t; cin >> t; while(t--)
#define debug(x) cout << '>' << #x << ':' << x << "\n";
#define endl '\n'
#define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mxx 1e6+7

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int* input, int p, int r, int pivot) {
    int pivotVal = abs(input[pivot]);
    swap(input[pivot], input[r]);
    int j = p;
    fogg(i, p, r-1) {
    	if (abs(input[i]) <= abs(pivotVal)) {
    		swap(input[i], input[j]);
    		j++;
    	}
    }

    swap(input[j], input[r]);
    
    return j;
}

// Solution using Quick Select, expected to run in O(n)
int quick_select(int* input, int p, int r, int k) {
	int pivot = p + rand() % (r - p + 1);
    if (p == r) 
    	return input[p];
    int pivotIndex = partition(input, p, r, pivot);

    if (k == pivotIndex)
    	return pivotIndex;

    else if (k < pivotIndex) 
    	return quick_select(input, p, pivotIndex - 1, k);
    
    else 
    	return quick_select(input, pivotIndex + 1, r, k);
}

// Solution using selection sort in O(n*k)
int selection_select(int* input, int k, int n) {
	int minIndex = -1, temp;
	rep(i, k) {
		minIndex = i;
		fogg(j, i, n-1) {
			if (abs(input[j]) < abs(input[minIndex])) {
				minIndex = j;
				// debug(input[j]);
			}
		}
		// debug(minIndex);
		temp = input[i];
		input[i] = input[minIndex];
		input[minIndex] = temp;
	}
}

int main() {
	off;
	int n, k, x;
	int a[100007];
	test {
		cin >> n >> x >> k;
		rep(i, n) {
			cin >> a[i];
		}

		rep(i, n) {
			a[i] = a[i] - x;
		}

		// selection_select(a, k, n);
		quick_select(a, 0, n-1, k);

		rep(i, k) {
			a[i] = a[i] + x;
		}

		rep(i, k) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

  	return 0;
}
