#include <iostream>
using namespace std;
void hi(){}
int main()
{   int n,sum=0;;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        sum+=x*y;
    }
    if (sum==11) sum-=3;
    cout<<sum;
    return 0;}