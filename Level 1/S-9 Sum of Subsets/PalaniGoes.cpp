#include <iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    while(n--){
        int sum,a[3],min=11;
        for(i=0;i<3;i++)
        {   
            cin>>a[i];
            if(a[i]<min)
            min=a[i];
        }
        sum=a[0]+a[1]+a[2]-min;
        cout<<sum<<"\n";
    }
    return 0;
}