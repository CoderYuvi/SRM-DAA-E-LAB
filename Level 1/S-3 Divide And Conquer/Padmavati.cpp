// Padmavati is a clever girl and she wants to participate in Olympiads this year. Of course she wants her partner to be clever too (although he's not)! Padmavati has prepared the following test problem for Sativathi. There is a sequence a that consists of n integers a1, a2, ,..., an. Let's denote Al, r, x) the number of indices k such that: /<k≤r and a= x. His task is to calculate the number of pairs of indicies i, j ( <i<j≤n) such that {(1, i, a;) > Alaaf


#include <iostream>
#include <map>
using namespace std;
const int N=1<<20;
int n,a[N],c[N],w;
void upd(int i,int c){
}
int main(){
 cin>>n;
 for(int i=0;i<n;++i)cin>>a[i];
 map<int,int>u,v;
 for(int i=n;i-->0;){
 int x=++u[a[i]];
 while(x<N)++c[x],x+=x&-x;
 }
 for(int i=0;i<n;++i){
 int x=u[a[i]]--,y=v[a[i]]++;
 while(x<N)--c[x],x+=x&-x;
 while(y>0)w+=c[y],y-=y&-y;
 }
 cout<<w<<endl;
}