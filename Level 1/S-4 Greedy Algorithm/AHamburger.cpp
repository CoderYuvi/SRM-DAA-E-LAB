// A hamburger stand received n orders for the rental.
// Each rental order reserve the hamburger for a continuous period of time, the ith order is characterised by two time values the start time l; and the finish time rillisr.
// hamburger stand management can accept and reject orders.
// What is the maximal number of orders the hamburger can accepte
// No two accepted orders can intersect, i.e. they can't share even a moment of time.
// If one order ends in the moment other starts, they can't be accepted both.



#include<bits/stdc++.h>
using namespace std;
int n,l,z;
pair<int,int> a[500020];
int main(){
 cin>>n;
 for(int i=0;i<n;i++){
 cin>>a[i].second>>a[i].first;
 }
 sort(a,a+n);
 for(int i=0;i<n;i++){
 if(l<a[i].second){
 z++;
 l=a[i].first;
 }
 }cout<<z;
 return 0;
}