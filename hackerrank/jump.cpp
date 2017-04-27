/** Author : Aman Pratap Singh
 *  Compiler : G++
 *  Problem URL : https://www.hackerrank.com/challenges/find-digits
 */
 
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    int position = 0, e = 100;
    
    do {
        position = (position + k) % n;
        
        if (c[position] == 1)
            e = e - 3;
        else
            e = e - 1;
    }
    while (position != 0);
    
    cout << e << endl;
    
    return 0;
}
