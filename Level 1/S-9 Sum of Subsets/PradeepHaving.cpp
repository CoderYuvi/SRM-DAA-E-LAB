#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,s,arr[7]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        int k=7,l;
        while(s){
            l=s%10;
            arr[k-1]+=l;;
            k--;
            s=s/10;
        }
    }
    sort(arr,arr+7);
    cout<<arr[6];

}