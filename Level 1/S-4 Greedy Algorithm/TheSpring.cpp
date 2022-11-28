#include <bits/stdc++.h>
using namespace std;
int g[110],cnt[110],n,m,idx; char s[110]; map<string,int> _hash;
int main()
{
int i;
cin>>n>>m; for(i=1;i<=n;i++) cin>>g[i]; sort(g+1,g+n+1); for(i=1;i<=m;i++)
{
string s;
cin>>s;
if(!_hash.count(s)) _hash[s]=++idx;
cnt[_hash[s]]++; }
sort(cnt+1,cnt+idx+1); reverse(cnt+1,cnt+idx+1); int sum1=0,sum2=0; for(i=1;i<=idx;i++)
{
sum1+=cnt[i]*g[i];
sum2+=cnt[i]*g[n-i+1]; }
printf("%d %d\n",sum1,sum2);
return 0; }