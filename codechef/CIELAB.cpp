#include <iostream>
 
using namespace std;
 
int main() {
 
int n, m;
 
cin >> n >> m;
 
int res = n - m;
 
if (res % 10 == 0)
	res++;
else
	res--;

if(res == 0)
    res = 2;
    
cout << res << endl;
 
return 0;
 
} 