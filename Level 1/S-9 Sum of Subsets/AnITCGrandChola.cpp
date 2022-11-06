#include <iostream>
using namespace std;

int fun(int x,int y){
    if(x==y)
    return 2*x-1;
    else if(1)
        return ((y*2)+x-y);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<fun(x,y)<<"\n";
    }
    return 0;
}