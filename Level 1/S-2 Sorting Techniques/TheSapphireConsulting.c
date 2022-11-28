#include <stdio.h>
#include <stdlib.h>
int isqrt(n) int n; {
int i;
for(i=0;i*i<n;i++);
return i;
}
int main() {
int c;
int t,h,s,i,j;
int d;
scanf("%d",&c);
for(i=0;i<c;i++) {
s=0;
scanf("%d %d",&t,&h);
d=isqrt(t);
s+=t+(d*4);
for(j=1;j<h;j++) {
s+=3;
s+=(d+j)*4;
if((d+j)>2)
s+= (d+j-2)*2;
}
printf("%d liters\n",s);
}
return 0;
}