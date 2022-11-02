// You have infinite cards for each number between 1 and N (inclusive of them). Your task is to select three integers such that after sorting them in ascending order, the difference between the adjacent number is less than or equal to two. Find the number of ways to choose three numbers and print them.
// Note: The order of numbers does not matter.


#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 //preSum();
 ll t;
 cin>>t;
 while(t--){
 ll n;
 cin>>n;
 if(n==1)
 printf("1\n");
 else if(n==2)
 printf("4\n");
 else if(n==3)
 printf("10\n");
 else
 printf("%lld\n",9*n-18);
 }
}