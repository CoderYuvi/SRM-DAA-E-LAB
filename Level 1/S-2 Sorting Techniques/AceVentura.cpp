#include<bits/stdc++.h>
using namespace std;
#define p1 cout<<"Ace, move fast, pigeon is at ("<<i<<",0)";
#define p2 cout<<"Ace, move fast, pigeon is at ("<<(i-i/z)%z<<","<<i/z<<")";
#define p3 cout<<"No pigeon, try another map, Ace";
#define a continue;
#define f(n) for(int i=0;i<z;i++)
#define while1 while((scanf("%c",&s[i])) != EOF)
int main(){
    string s1; cin>>s1;
    int z=s1.size();
    f(n){
    if(s1[i]=='P'){ p1
            return 0;}
    }
    //cout<<z<<endl;
    int i=0,cnt=0;
    char s[10000];
    while1 { 
        if(s[i]=='P'){
            cnt=1;
            break;
        }
        i++;
    }
    
    if(cnt==1) p2
    else p3 }