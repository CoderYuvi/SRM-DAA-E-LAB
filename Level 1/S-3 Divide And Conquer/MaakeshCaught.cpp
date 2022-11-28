#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
int R,D,n,m,d,h[N];
vector<int> adj[N];
bool prob[N],is[N];
void evil(int u,int p=0){
 h[u]= h[p]+1;
 prob[u] &= (h[u]<=d);
 if(is[u]&&h[u]>D)
 D=h[u],R=u;
 for(unsigned int i=0;i<adj[u].size();++i){
 int v= adj[u][i];
 if(v!=p)
 evil(v,u);
 }
}
int main(){
 cin>>n>>m>>d;memset(prob,true,sizeof(prob));
 h[0]=-1;int a,b,i;D=0;
 for(i=0;i<m;++i)
 cin>>R,is[R]=true;
 for(i=0;i<n-1;++i)
 scanf("%d%d",&a,&b),adj[a].push_back(b),adj[b].push_back(a);
 evil(R);evil(R);evil(R);
 int ret=0;
 for(i=1;i<=n;++i)
 if(prob[i])++ret;
 cout<<ret<<endl;
}