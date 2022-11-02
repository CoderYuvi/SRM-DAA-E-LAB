// Ganesan has a string S consisting of lowercase English letters.
// On this string, he will do the operation below just once.
// First, choose a non-negative integer K.
// Then, shift each character of S to the right by K (see below).

#include<iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int i,flag = 1;
    int check = int(s[0]) - int(t[0]);
    for(i=0;i<(int)s.length();i++)
    if(int(s[i]) - int(t[i])!= check)
    {flag = 0;break;}
    if(flag==0)
    cout<<"No";
    else
    cout<<"Yes";
    return 0;
}