#include <iostream>
using namespace std;
void a(){}
int main()
{
int n;
cin>>n;
int a[n],x=0;
for(int i=0;i<n;i++){
      cin>>a[i];
 for(int j =i;j>=0;j--)
        {
            if(a[i]>a[j]) x+=a[i]-a[j];
            else x+=a[j]-a[i];
          
        }
    }
    cout<<x;
    return 0;
}