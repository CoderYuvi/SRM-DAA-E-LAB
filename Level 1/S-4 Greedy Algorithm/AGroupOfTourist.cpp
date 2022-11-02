// A group of tourists is going on to rameshwaram and dhanushkodi tour. A rented bus has arrived at the boat depot to take rameshwaram and dhanushkodi's to the point of departure.
// It's known that all rameshwaram are of the same size (and each of them occupies the space of 1 cubic metre), and all dhanushkodi's are of the same size, but two times bigger than rameshwaram (and occupy the space of 2 cubic metres)
// Each waterborne vehicle has a particular carrying capacity, and it should be noted that waterborne vehicles that look the same can have different carrying capacities.
// Knowing the bus body volume and the list of waterborne vehicles in the boat depot (for each one its type and carrying capacity are known), find out such a set of vehicles that can be taken in the lorry, and that has the maximum total carrying capacity.
// The bus body volume of the lorry can be used effectively, that is to say, you can always put into the lorry a waterborne vehicle that occupies the space not exceeding the free space left in the bus body.



#include<bits/stdc++.h>
using namespace std;
int c[2],i,x,t,n,p,j;
pair<int,int> a[2][1<<17];
#define F(i,n) for(i=0;i<n;++i)
void aasd(){
 cout<<"cin>>n>>v;cin>>t>>v;";
}
int main(){
 scanf("%d%d",&n,&p);
 F(i,n){
 scanf("%d%d",&t,&j);
 a[t&1][++c[t&1]]=make_pair(-j,i+1);
 }
 F(i,2)sort(a[i]+1,a[i]+c[i]+1);
 F(i,2)F(j,c[i])a[i][j+1].first+=a[i][j].first;
 n=min(p,c[1]);
 for(i=0;~n;--n)
 if((t=a[1][n].first+a[0][min(*c,(p-n)/2)].first)<x)i=n,x=t;
 printf("%d\n",-x);
 F(t,i)printf("%d ",a[1][t+1].second);
 t=min(*c,(p-i)/2);
 F(i,t)printf("%d ",a[0][i+1].second);
 return 0;
}