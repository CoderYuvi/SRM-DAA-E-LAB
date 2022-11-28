#include<iostream>
#include<algorithm>
using namespace std;

int main() {

    int n,p;
    cin>>p;
    while (p--){
    cin>>n;
    int b[n],g[n],s=0;
  for(int i = 0;i<n;i++)    cin>> b[i] ;
    for (int i = 0; i < n; i++)   cin>> g[i] ;
/*    ADSort(g,b, n);*/
sort(b,b+n,greater<int>());
sort(g,g+n);
    for (int i = 0; i < n; i++) {  if(b[i]%g[i]==0)s++;
        else if(g[i]%b[i]==0)s++;}
    cout<<s<<endl;}
}