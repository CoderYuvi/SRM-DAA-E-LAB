#include<bits/stdc++.h>
using namespace std;
int main (){
string a,b;
cin>>a>>b;
reverse(a.begin(), a.end());
a==b?cout<<"YES": cout<<"NO";
return 0;
}