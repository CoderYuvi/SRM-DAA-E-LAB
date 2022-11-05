#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
#define dep(i,n)for(int i=0;i<(n);i++)
int const N=70;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
char s[N][N];
int vis[N][N];
int n,m;
int squares(int x,int y){
    if(s[x][y]!='#'||vis[x][y])return 0;
    vis[x][y]=1;
    dep(i,4)squares(x+dx[i],y+dy[i]);
    return 1;}

int main(){
   cin>>n>>m;
    dep(i,n)scanf("%s",s[i]);
    int cnt=0;
    dep(i,n)dep(j,m){
        if(s[i][j]=='.')continue;
        cnt++;s[i][j]='.';
        int k=0;memset(vis,0,sizeof(vis));
        dep(d,4)k+=squares(i+dx[d],j+dy[d]);
        if(k>1){puts("1");return 0;

        }s[i][j]='#';}
        printf("%d\n",cnt>2?2:-1);

}