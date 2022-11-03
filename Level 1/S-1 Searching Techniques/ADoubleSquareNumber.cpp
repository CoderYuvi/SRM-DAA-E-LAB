#include <bits/stdc++.h>
using namespace std;
int sumSquare(int n)
{
    int res=0;
	for (long i = 0; i * i <= n; i++)
		for (long j = i; j * j <= n; j++)
			if ((i * i + j * j == n) ) {
				res++;
			}
	return res;
}
int main()
{
    int t;
    cin>>t;
    int i=1;
    while(t--){
        int n;
        cin>>n;
        cout<<"Line #"<<i<<": "<<sumSquare(n)<<endl;
        i++;
    }
	return 0;
	cout<<"for(i=0;i<=sqrt(y);i++) for(j=0;j<=i;j++)";
}