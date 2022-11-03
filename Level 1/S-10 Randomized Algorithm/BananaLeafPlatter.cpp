#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
void dummy(){}
int n, k, p, a[50][30];
int dp[51][1501];
void solve() {
cin >> n >> k >> p;
memset(dp, 0xc0, sizeof(dp));
dp[0][0]=0;
for(int i=0; i<n; ++i) {
memcpy(dp[i+1], dp[i], sizeof(dp[0]));
for(int j=0, s=0; j<k; ++j) {
cin >> a[i][j];
s+=a[i][j];
//use j+1 plates
for(int l=0; l+j+1<=p; ++l)
dp[i+1][l+j+1]=max(dp[i][l]+s, dp[i+1][l+j+1]);
}
}
cout << dp[n][p] << "\n";
}
int main() {
int n, i;
cin >> n;
for(i=0;i<n;i++) {
solve();
}
return 0;
cout<<"int max(int a,int b) for(int i = 0;i < n;i++) ";
}