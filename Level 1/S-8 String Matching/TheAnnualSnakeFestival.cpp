#include <iostream>
using namespace std;

bool ans(int n,string s){
    int f=0;
    for(int i=0;i<n;i++){
        if(s[i]=='H'){
            if(f==0)
            f=1;
            else
            return false;
        }
        
        
        if(s[i]=='T'){
            if(f==1)
            f=0;
            else
            return false;
        }   
    }
    if(f==1)
    return false;
    return true;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        string s;
        cin>>n>>s;
        if(ans(n,s))
        cout<<"Valid\n";
        else
        cout<<"Invalid\n";
        
    }
}