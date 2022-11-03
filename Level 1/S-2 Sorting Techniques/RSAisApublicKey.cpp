#include <bits/stdc++.h>
using namespace std;
void solve(){
    cout<<"break;";
}
bool isProduct(int num)
{
	int cnt = 0;
	for (int i = 2; cnt < 2 && i * i <= num; ++i) {
		while (num % i == 0) {
			num /= i;
			++cnt;
		}
	}
	if (num > 1)
		++cnt;
	return cnt == 2;
}
void findNumbers(int N)
{
	vector<int> vec;
	for (int i = 1; i <= N; i++) {
		if (isProduct(i) ) {
			vec.push_back(i);
		}
	}
	cout<<vec.size()<<endl;
}
int main()
{
    int t,N;
    cin>>t;
    while(t--){
        cin>>N;
        findNumbers(N);
    }
	return 0;
}