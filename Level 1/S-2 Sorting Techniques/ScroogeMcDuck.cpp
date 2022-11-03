#include<iostream>
using namespace std;
int main()
{
    int p,q,r,i;
    int c;
    cin>>c;
    for(i=0;i<c;i++){
        cin>>p>>q>>r;
        q=q+(r-1)/5;
        r=(r-1)%5+1;
        p=p+(q-1)/10;
        q=(q-1)%10+1;
        cout<<p<<" ";
        cout<<q<<" ";
        cout<<r<<endl;
    }
	return 0;
}