// Professor Wiki has performed some experiments on rays. The setup for n rays is as follows.
// There is a rectangular box having exactly n holes on the opposite faces.
// All rays enter from the holes of the first side and exit from the holes of the other side of the box.
// Exactly one ray can enter or exit from each hole. The holes are in a straight line.
// Professor Wiki is showing his experiment to his students. He shows that there are cases, when all the rays are intersected by every other ray.
// A curious student asked the professor: "Sir, there are some groups of rays such that all rays in that group intersect every other ray in that group.
// Can we determine the number of rays in the largest of such groups?".
// Professor Wiki now is in trouble and knowing your intellect he asks you to help him.

#include<bits/stdc++.h>
using namespace std;
int n,x,i;
int a[1000020];
int p[1000020];
int f[1000020];
int main()
{
 cin>>n;
 for(i=0;i<n;i++)
 {
 cin>>x;
 p[x]=i;
 }
 for(i=0;i<n;i++)
 {
 scanf("%d",&x);
 a[i]=-p[x]-1;
 }
 for(i=0;i<n;i++)
 *lower_bound(f,f+n,a[i])=a[i];
 int zero=0;
 printf("%ld\n",lower_bound(f,f+n,zero)-f);
 return 0;
}