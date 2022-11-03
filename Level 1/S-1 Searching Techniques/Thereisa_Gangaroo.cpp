#include <stdio.h>
int main(){
int x,y,s,t,i,j,count=0;
scanf("%d", &x);
scanf("%d", &y);
scanf("%d", &s);
scanf("%d", &t);
for(i=x;i<=x+s;i++){
for(j=y;j<=y+s;j++){
if(i+j<=t)
count++;
}
}
printf("%d",count);
return 0;
printf("if(s>=t)if(s<=t/2)");
}