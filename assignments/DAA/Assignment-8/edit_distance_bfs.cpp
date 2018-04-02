/**
 * Aman Pratap Singh
 * 16CS01011, Design and Analysis of Algorithms
 */

#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        string s;
        int pointer;
        int height;
    node() {
        pointer = 0;
        height = 0;
    }
};

int bfs(string s1, string s2) {
    queue<node> q;
    set<string> se;

    for(int i = 0; i < s2.length(); i++) {
        string y = "";
        y += s2[i];
        se.insert(y);
    }

    node n;
    n.s = s1;
    q.push(n);

    while(q.front().s != s2) {
        node x = q.front();
        q.pop();
        x.height += 1;
        x.pointer++;

        for(auto i : se) {
            x.s.insert(0, i);
            q.push(x);
            step++;
            x.s.erase(x.s.begin());
        }

        q.push(x);
        x.pointer--;

        if (x.pointer < x.s.length())
        x.s.erase(x.s.begin()+x.pointer);

        q.push(x);
    }
    return q.front().height;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int l1 = s1.length();
    int l2 = s2.length();
    
    cout << bfs(s1, s2) << endl;
    cout << step << endl;
}
