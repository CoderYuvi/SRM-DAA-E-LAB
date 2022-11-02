// Recently Aarush has become keen on physics. Anna V., his teacher noticed Aarush's interest and gave him a fascinating physical puzzle a half-decay tree.
// A half-decay tree is a complete binary tree with the height h. The height of a tree is the length of the path (in edges) from the root to a leaf in the tree. While studying the tree Aarush can add electrons to vertices or induce random decay with synchrophasotron.
// Random decay is a process during which the edges of some path from the root to the random leaf of the tree are deleted. All the leaves are equiprobable. As the half-decay tree is the school property, Aarush will return back the deleted edges into the tree after each decay.
// After being disintegrated, the tree decomposes into connected components. Charge of each component is the total quantity of electrons placed in vertices of the component. Potential of disintegrated tree is the maximum from the charges of its connected components. Each time before inducing random decay Aarush is curious about the mathematical expectation of potential of the tree after being disintegrated.

#include<bits/stdc++.h>
using namespace std;
int h,q,v,e;string str;map<int,int> f;
double puzzle(int u,int mx) {return (f[u]<=mx)?mx:(0.5*(puzzle(u<<1,max(mx,f[u]-
f[u<<1]))+puzzle(u<<1|1,max(mx,f[u]-f[u<<1|1]))));}
int main(){
cin>>h>>q;
 while (q--){
 cin>>str;
 if (str[0]=='a'){
 scanf("%d %d",&v,&e);
 while (v) f[v]+=e,v>>=1;
 }
 else printf("%.2lf\n",puzzle(1,0));
 }
 return 0;
}