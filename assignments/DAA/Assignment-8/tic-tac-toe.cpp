/**
 * Aman Pratap Singh
 * 16CS01011, Design and Analysis of Algorithms
 */

#include <bits/stdc++.h>
using namespace std;

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
    queue< pair<string, int> > q;
    q.push(make_pair(board, 0));

    bool o = false, t = false;
    while(!q.empty()) {
        string x = q.front().first;
        int level = q.front().second;
        q.pop();
        if (win(x, '1') & !o) {
            cout << "Player 1 win in steps: " << level << endl;
            o = true;
        }
        else if (win(x, '2') & !t) {
            cout << "Player 2 win in steps: " << level << endl;
            t = true;
        }
        if (o && t) {
            break;
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
                q.push(make_pair(y, level));
                y = x;                
            }
        }
        if (one == two + 1)
        for(int i = 0; i < 9; i++) {
            if (x[i] == '0') {
                z[i] = '2';
                // cout << z << endl;                
                q.push(make_pair(z, level));                
                z = x;
            }
        }
    }
}