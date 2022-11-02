// Fazil is an unemployed computer scientist who spends his days working at odd-jobs. While on the job he always manages to find algorithmic problems within mundane aspects of everyday life.
// Today, while writing down the specials menu at the restaurant he's working at, he felt irritated by the lack of palindromes (strings which stay the same when reversed) on the menu.
// Fazil is a big fan of palindromic problems, and started thinking about the number of ways he could remove letters from a particular word so that it would become a palindrome.
// Two ways that differ due to order of removing letters are considered the same. And it can also be the case that no letters have to be removed to form a palindrome.

#include <bits/stdc++.h>
using namespace std;
string word;
long long dp[100][100];
long long calculate(int s, int e){
 if(s > e)
 return 0;
 if(s == e )
 return 1;
 if(dp[s][e] != -1)
 return dp[s][e];
 if(word[s] == word[e])
 return dp[s][e] = 1 + calculate(s+1, e) + calculate(s, e-1);
 else
 return dp[s][e] = calculate(s+1, e) + calculate(s, e-1) - calculate(s+1, e-1);
}
int main(){
 cin>>word;
 memset(dp, -1, sizeof dp);
 cout<<calculate(0,word.size()-1)<<endl;
 return 0;
 printf("long long calculate(int s,int e)");
}