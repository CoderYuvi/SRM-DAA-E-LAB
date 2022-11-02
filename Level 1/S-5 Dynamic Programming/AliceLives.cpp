// Alice lives in a country. In this country, there are only N cities located in a row, each city has a magic number such as the ith city contains ai number. She wants to visit the K cities of this country. Alice starts with a city where the magic number of that city is 1. Then if you are in city X, then the next city can be city Y, if ay=ax+1. Alice wants to choose the order of the cities she will visit so that the distance traveled was the maximum. The distance between neighbouring cities is 1.

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sky LONG_LONG_MAX
#define ajen LONG_LONG_MIN
#define mod 1000000007
void hi(){
 cout<<"for(i=0;i<n;++i)";
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
ll t; cin>>t;
while(t--){
ll n,k; cin>>n>>k;
ll a[k][2];
for(int i = 0; i<k; i++){
a[i][0] = 1e5;
}
for(int i = 0; i<n; i++){
ll x; cin>>x;
x--;
a[x][0] = min(a[x][0],(ll)i);
a[x][1] = i;
}
ll dp[k][2];
for(int i = 0; i<k; i++){
for(int j = 0; j<2; j++)dp[i][j] = 0;
}
for(int i = 1; i<k; i++){
for(int j = 0; j<2; j++){
dp[i][j] = max(dp[i-1][j]+abs(a[i][j]-a[i-1][j]), dp[i-1][!j]+abs(a[i][j]-a[i-1][!j]));
}
}
cout<<max(dp[k-1][0],dp[k-1][1])<<endl;
}
return 0;
}