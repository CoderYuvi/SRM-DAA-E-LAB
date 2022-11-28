#include<iostream>
using namespace std;

int main(){
int p,i;
cin>>p;
int a[p];
for(i=0;i<p;i++)cin>>a[i];

int s=a[0];
i=1;
while (1){
if(i>=p)break;
s=s^a[i];
i++;
}
cout<<s;
return 0;
}