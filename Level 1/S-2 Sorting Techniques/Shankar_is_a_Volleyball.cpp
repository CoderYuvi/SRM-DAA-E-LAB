#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=(int)1e6+6,mod=(int)0;
int a[N];
long long sum[N];
int main(){
int tc;
cin>>tc;
for(int tt=1;tt<=tc;++tt){
int n,p;
cin>>n>>p;
for(int j=0;j<n;++j)
cin>>a[j];
sort(a,a+n);
int i;
for(i=0;i<n;i++) sum[i+1]=sum[i]+a[i];
long long res=1e18;
for(int j=p-1;j<n;++j){
long long s=sum[j+1]-sum[j-(p-1)]; long long cost=(LL)a[j]*p-s; res=min(res,cost);
}
cout<<res<<'\n';
}
}