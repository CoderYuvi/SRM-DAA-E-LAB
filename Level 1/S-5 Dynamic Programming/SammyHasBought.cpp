// Samy has bought a box of chocolate and has brought them to Anand house. There is a random number on each chocolate. They decided to play a game with them.
// They arranged them randomly in a row. They each start from one end of the row (Samy starts from left and Anand from right). They can only move towards each other, and in each step, they can move at most k chocolate. More specifically Samy can go from the ith place to one of i+1, i+2, ..., i+k and Anand can go from ith place to i−1, i–2, . i-k.
// ***
// They can only eat the chocolate they are on if their number is the same. The game ends if they can eat any chocolate. Their goal is to eat the last chocolate together.

#include<stdio.h>
int function(int arr[],int i,int j,int memo[][1001],int k)
{
 if(i>j)
 return 0;
 if(arr[i]!=arr[j])
 return 0;
 if(i==j)
 return 1;
 if(memo[i][j]!=-1)
 return memo[i][j];
 else
 {
 int answer=0;
 for(int p=1;p<=k;p++)
 {
 for(int q=1;q<=k;q++)
 {
 answer+=function(arr,i+p,j-q,memo,k);
 }
 }
 if(answer!=0)
 answer=1;
 memo[i][j]=answer;
 return answer;
 }
}
int main()
{
 int n,k;
 scanf("%d%d",&n,&k);
 int j,arr[n+1];
 for(j=1;j<=n;j++)
 scanf("%d",&arr[j]);
 int memo[1001][1001];
// int answer=0;
 int i;
 for(i=0;i<=1000;i++)
 {
 for(j=0;j<=1000;j++)
 {
 memo[i][j]=-1;
 }
 }
 int answer=function(arr,1,n,memo,k);
 if(answer==0)
 printf("NO\n");
 else
 printf("YES\n");
}