/***
 *                                    _____           _                 _____ _             _     
 *      /\                           |  __ \         | |               / ____(_)           | |    
 *     /  \   _ __ ___   __ _ _ __   | |__) | __ __ _| |_ __ _ _ __   | (___  _ _ __   __ _| |__  
 *    / /\ \ | '_ ` _ \ / _` | '_ \  |  ___/ '__/ _` | __/ _` | '_ \   \___ \| | '_ \ / _` | '_ \ 
 *   / ____ \| | | | | | (_| | | | | | |   | | | (_| | || (_| | |_) |  ____) | | | | | (_| | | | |
 *  /_/    \_\_| |_| |_|\__,_|_| |_| |_|   |_|  \__,_|\__\__,_| .__/  |_____/|_|_| |_|\__, |_| |_|
 *  16CS01011, Github: @apsknight                             | |                      __/ |      
 *  Indian Institute of Techology Bhubaneswar                 |_|                     |___/       
 *  Data Structure Lab, Assignment - 4
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
#define mxx (int) 1e9+7

void heapify(vector <pair<int, int> >& heap, int i) {
	int left = 2*i + 1;
	int right = 2*i + 2;
	int max = i;
	int heapSize = heap.size();

	if (left < heapSize && heap[left].second > heap[max].second) {
		max = left;
	} 

	if (right < heapSize && heap[right].second > heap[max].second) {
		max = right;
	}

	if (max != i) {
		swap(heap[max], heap[i]);
		heapify(heap, max);
	}
}

void makeHeap(vector <pair<int, int> >& heap) {
	int n = heap.size();

	ford(i, (n-1) / 2, 0) {
		heapify(heap, i);
	}
}

void initIndex(vector <pair<int, int> > heap, vector< int >& idx) {
	int n = heap.size();
	rep(i, n) {
		idx[heap[i].first] = i;
	}
}	

void upVote(vector <pair<int, int> >& heap, vector< int >& idx, int i) {
	int heapIndex = idx[i];
	heap[heapIndex].second++;
	// debug(heap[(heapIndex-1) / 2]);
	// debug(heap[heapIndex]);
	while(heapIndex > 0  && heap[(heapIndex-1) / 2].second < heap[heapIndex].second) {
		// debug("swapping");
		swap(heap[heapIndex], heap[(heapIndex-1)/2]);
		heapIndex = (heapIndex-1) / 2;
	}
	initIndex(heap, idx);
}	

void downVote(vector <pair<int, int> >& heap, vector< int >& idx, int i) {
	int heapIndex = idx[i];

	if (heap[heapIndex].second != 0) {
		heap[heapIndex].second--;
		heapify(heap, heapIndex);
	}
	initIndex(heap, idx);
}

void insert(vector <pair<int, int> >& heap, vector< int >& idx, int val) {
	int size = heap.size();
	heap.push_back(make_pair(idx.size(), val));

	while(size > 0  && heap[(size-1) / 2].second < heap[size].second) {
		swap(heap[size], heap[(size-1)/2]);
		size = (size-1) / 2;
	}
	idx.push_back(heap.size());
	initIndex(heap, idx);
}

void dlt(vector <pair<int, int> >& heap, vector< int >& idx, int i) {
	int id = idx[i];
	idx[i] = -1;
	heap.erase (heap.begin() + id);
	makeHeap(heap);
	initIndex(heap, idx);
}

void instruct() {
	cout << "Enter 1-5 " << endl;
	cout << "1. Insert" << endl;
	cout << "2. Upvote" << endl;
	cout << "3. Downvote" << endl;
	cout << "4. Delete" << endl;
	cout << "5. Quit" << endl;
	return;
}

int main() {	
	int ninit;
	cin >> ninit;

	vector< pair<int, int> > heap(ninit);
	vector< int > idx(ninit);

	// srand(time(NULL));
	rep(i, ninit) {
		heap[i].first = i; 
		int v;
		cin >> v;
		heap[i].second = v;
	}

	rep(i, ninit) {
		cout << "<" << heap[i].first << ", " << heap[i].second << "> ";
	}
	cout << endl;

	makeHeap(heap);
	initIndex(heap, idx);

	rep(i, ninit) {
		cout << "<" << heap[i].first << ", " << heap[i].second << "> ";
	}
	cout << endl;

	rep(i, ninit) {
		cout << "<" << i << ", " << idx[i] << "> ";
	}
	cout << endl;

	instruct();
	int n;
	cin >> n;

	while(n != 5) {
		if (n == 1) {
			cout << "Value :";
			int val;
			cin >> val;
			insert(heap, idx, val);
		}
		else if (n == 2) {
			cout << "ID :";
			int val;
			cin >> val;
			upVote(heap, idx, val);
		}
		else if (n == 3) {
			cout << "ID :";
			int val;
			cin >> val;
			downVote(heap, idx, val);
		}
		else if (n == 4) {
			cout << "ID :";
			int val;
			cin >> val;
			dlt(heap, idx, val);
		}
		else if (n == 5) {
			break;
		}
		else {
			cout << "Please select a valid option." << endl;
		}
		int hsz = heap.size();
		rep(i, hsz) {
			cout << "<" << heap[i].first << ", " << heap[i].second << "> ";
		}
		cout << endl;

		int isz = idx.size();
		rep(i, isz) {
			cout << "<" << i << ", " << idx[i] << "> ";
		}
		cout << endl;
		cin >> n;
	}

  	return 0;
}