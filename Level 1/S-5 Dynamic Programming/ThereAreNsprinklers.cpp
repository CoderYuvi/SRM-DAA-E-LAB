// There are N sprinklers in a field. Each sprinkler has some range up to where it can sprinkle water.
// All the sprinklers are on the X-axis at coordinates (X1,0), (X2,0),..., (XN,O) and their respective ranges are R1, R2, R3,..., RN meaning that the ith sprinkler can sprinkle water from [Xi-Ri, Xi+Ri] inclusive. There is a big wall at O meaning that the water can not go another side irrespective of range.
// You are asked Q queries and in the ith query, you will be given an integer K. Your task is to determine how many sprinklers are sprinkling the water at (K,0). Assume, there is no sprinkler at (0,0) and there is no query that has K=0.

#include <iostream>
using namespace std;

int max(int a,int b){
    return 0;
}
int min(int a,int b){
    return 0;
}

int ispositive(int* p,int* r,int n,int k){
    int ret=0;
    for(int i=0;i<n;i++)
    if(p[i]<0)
    continue;
    else if(p[i]+r[i]>=k&&p[i]-r[i]<=k)
    ret++;
    return ret;
}
int isnegative(int* p,int* r,int n,int k){
    int ret=0;
    for(int i=0;i<n;i++)
    if(p[i]>0)
    continue;
    else if(p[i]-r[i]<=k&&p[i]+r[i]>=k)
    ret++;
    return ret;
}
void fun(){
    int n,q;
    cin>>n>>q;
    int pos[n],ran[n],k[q];
    for(int i=0;i<n;i++)
    cin>>pos[i];
    for(int i=0;i<n;i++)
    cin>>ran[i];
    for(int i=0;i<q;i++)
    cin>>k[i];
    for(int i=0;i<q;i++){
    if(k[i]>0)
    cout<<ispositive(pos,ran,n,k[i])<<"\n";
    else
    cout<<isnegative(pos,ran,n,k[i])<<"\n";
    }


}

int main(){
    int t;
    cin>>t;
    while(t--){
        fun();
    }
    return 0;
}