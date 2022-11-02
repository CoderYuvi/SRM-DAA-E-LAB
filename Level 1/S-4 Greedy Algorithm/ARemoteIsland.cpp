// A remote island chain contains n islands, labeled 1 through n. Bidirectional bridges connect the islands to form a simple cycle a bridge connects islands 1 and 2, islands 2 and 3, and so on, and additionally a bridge connects islands n and 1.
// The center of each island contains an identical pedestal, and all but one of the islands has a fragile, uniquely colored statue currently held on the pedestal. The remaining island holds only an empty pedestal.
// The islanders want to rearrange the statues in a new order. To do this, they repeat the following process: First, they choose an island directly adjacent to the island containing an empty pedestal.
// Then, they painstakingly carry the statue on this island across the adjoining bridge and place it on the empty pedestal.
// Determine if it is possible for the islanders to arrange the statues in the desired order.

#include<iostream>
using namespace std;
int N;
int a[200010], b[200010];
int main()
{
 int i, j;
 cin>>N;
 for(i=0;i<N-1;i++)
 {
 cin>>a[i];
 if(a[i]==0) i--;
 }

 for(i=0;i<N-1;i++)
 {
 scanf("%d",&b[i]);
 if(b[i]==0) i--;
 if(b[i]==a[0]) j=i;
 }
 for(i=0;i<N-1;i++,j++)
 {
 if(a[i]!=b[j%(N-1)])
 {
 printf("NO\n");
 return 0;}
 }
 printf("YES\n");
 return 0;
 cout<<"cin>>n;cin>>b[i];";
}