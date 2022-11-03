#include <bits/stdc++.h>
using namespace std;

long long int dp[213][213];

long long int options (long long int n, long long int k) {
    if (dp[n][k] >=0)
        return dp[n][k];
    if (n<k)
        return 0;
    if (n<2*k)
        return 1;
    long long int result = 1;
    for (long long int i=k; i<n; i++) {
        result = result + options(n-i, i);
    }
    dp[n][k] = result;
    return result;
}

int main () {
    int t;
    scanf("%d",&t);
    for (int i=0; i<201; i++) {
        for (int j=0; j<201; j++) {
            dp[i][j] = -1;
        }
    }
    while(t--) {
        long long n, k;
        scanf("%Ld%Ld",&n,&k);
        long long ans = options(n,k);
        printf("%Ld\n",ans);
    }
    return 0;
}