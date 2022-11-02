// It's a very unfortunate day for Lavanya today. He got bad mark in algebra and was therefore forced to do some work in the kitchen, namely to cook borscht (traditional Russian soup). This should also improve his algebra skills. According to the borscht recipe it consists of n ingredients that have to be mixed in proportion
// (a: az an)
// a2:
// :
// litres (thus, there should be a x,..., an x litres of corresponding ingredients mixed for some non-negative x).
// In the kitchen Lavanya found out that he has b1,..., b, litres of these ingredients at his disposal correspondingly.
// In order to correct his algebra mistakes he ought to cook as much soup as possible in a Vlitres volume pan (which means the amount of soup cooked can be between 0 and Vlitres). What is the volume of borscht Lavanya will cook ultimately?

#include <bits/stdc++.h>
using namespace std;
#define res cin>>a[i],num+=a[i];
#define f1 for(int i=1;i<=n;i++)
double n,v,a[25],b[25],sum,mx=1e9;
int main(){
 cin>>n>>v;
 f1{
 cin>>a[i];
 sum+=a[i];
 }
 for(int i=1;i<=n;i++)
 cin>>b[i];
 for(int i=1;i<=n;i++)
 mx=min(mx,b[i]/a[i]);
 cout << fixed<<setprecision(1)<<min(mx*sum,v);
 return 0;
}