/**
 * Aman Pratap Singh
 * 16CS01011, Design and Analysis of Algorithms
 */

#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        string board;
        int level;
        vector<string> parent;
};

bool win(string board, char player) {
    if (board[0] == player && board[4] == player && board[8] == player) {
        return true;
    }
    else if (board[2] == player && board[4] == player && board[6] == player) {   
        return true;
    }
    for(int i = 0; i < 3; i++) {
        if (board[0+i] == player && board[3+i] == player && board[6+i] == player) {
            return true;
        }
        else if (board[0 + 3*i] == player && board[1 + 3*i] == player && board[2 + 3*i] == player) {  
            return true;
        }
    }

    return false;
}

int main() {
    // off;
    string board = "000000000";
    // memset(board, 0, sizeof board);

    cout << "Enter Board Configuration: " << endl;
    for(int i = 0; i < 9; i++) {
        cin >> board[i];
    }

    node n;
    n.board = board;
    n.level = 0;
    queue< node > q;
    q.push(n);

    bool o = false, t = false;
    while(!q.empty()) {
        string x = q.front().board;
        int level = q.front().level;
        q.pop();
        if (win(x, '1') && !o) {
            cout << "Player 1 win in steps: " << level << endl;
            q.front().parent.push_back(x);
            for(auto i : q.front().parent) {
                if (i == board) continue;
                for(int j = 0; j < 9; j++) {
                    cout << i[j] << " ";
                    if (j == 2 || j == 5 || j == 8) cout << endl;
                }
                cout << endl;
            }
            o = true;
        }
        else if (win(x, '2') && !t) {
            q.front().parent.push_back(x);
            cout << "Player 2 win in steps: " << level << endl;
            for(auto i : q.front().parent) {
                if (i == board) continue;                
                for(int j = 0; j < 9; j++) {
                    cout << i[j] << " ";
                    if (j == 2 || j == 5 || j == 8) cout << endl;
                }
                cout << endl;
            }
            t = true;
        }
        level++;
        string y = x, z = x;
        int one = 0, two = 0;

        for(int i = 0; i < 9; i++) {
            if (x[i] == '1') one++;
            if (x[i] == '2') two++;
        }
        if (one == two)
        for(int i = 0; i < 9; i++) {
            if (x[i] == '0') {
                y[i] = '1';
                // cout << y << endl;
                node c;
                c.board = y;
                c.level = level;
                c.parent = q.front().parent;
                c.parent.push_back(x);
                q.push(c);
                y = x;                
            }
        }
        if (one == two + 1)
        for(int i = 0; i < 9; i++) {
            if (x[i] == '0') {
                z[i] = '2';
                // cout << z << endl;
                node c;
                c.board = z;
                c.level = level;
                c.parent = q.front().parent;
                c.parent.push_back(x);
                q.push(c);                
                q.push(c);                
                z = x;
            }
        }
        // for(int i = 0; i < 9; i++) {
        //     cout << y[i] << ' ';
        //     if (i == 2 || i == 5 || i == 8) cout << endl;
        // }
        // cout << endl;
        // for(int i = 0; i < 9; i++) {
        //     cout << z[i] << ' ';
        //     if (i == 2 || i == 5 || i == 8) cout << endl;
        // }
        // cout << endl;
        if (o && t) {
            break;
        }
    }
}