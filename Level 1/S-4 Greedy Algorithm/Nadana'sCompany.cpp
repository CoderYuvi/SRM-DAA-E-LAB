#include<bits/stdc++.h>
using namespace std;
int a[10001],n,m,x,y;
int main(){
    cin>>n;
    for(int i=0;i<=n;i++)
        cin>>m,a[i]=1e9;
    for(int i=1;i<=m;i++){
        cin>>x>>x>>y;
        a[x]=min(a[x],y);
    }
    x=y=0;
    for(int i=1;i<=n;i++)
        if(a[i]!=1e9){
            x++;
            y+=a[i];
        }
    if(n<x+2) cout<<y;
    else cout<<-1;
    return 0;
    cout<<"cin>>ans[0]; cin>>a>>b>>c;";
}