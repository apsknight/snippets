#include<bits/stdc++.h>

using namespace std;
const int MX = 111 , shift = 51;
int dp[MX][MX][MX];
int n , arr[MX] , T;
int calc(int pos , int dpos , int dnxt){
    if(pos == 101) return 1;
    if(dpos + arr[pos] < 0 || dnxt + arr[pos + 1] < 0) return 0;
    int &ret = dp[pos][dpos + shift][dnxt + shift]; if(ret != -1) return ret;
    ret = 0;
    for(int app = 0 ; app <= min(dpos + arr[pos] , dnxt + arr[pos+1]) ; app++){
        ret += calc(pos + 1 , dnxt - app , app);
        ret %= 1000000007;
    }
    return ret;
}
int main(){
    scanf("%d",&T);
    while(T--){
        memset(dp , -1 , sizeof(dp));
        cin>>n;
        for(int j = 1 ; j <= 100 ; j++) arr[j] = 0;
        for(int j = 1 ; j <= n ; j++) cin>>arr[j];
        cout<<calc(1 , 0 , 0)<<endl;

    }
}