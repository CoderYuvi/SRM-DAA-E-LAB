#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,maxs=0;
map<ll,ll> mp;
int main(){
    cin>>n;
    for(ll i=0,x=0,y;i<n;++i)
        cin>>y,maxs=max(maxs,++mp[x+=y]);
    cout<<n-maxs;
}