// Vinoth's model practical is approaching and he haven't begun to prepare. In order to have the best chance of passing the course, he resolve to study from now until practical time. Sections vary in length, but not in value towards a passing mark, so he want to study as many complete sections as possible. The order of sections doesn't matter, but he must complete a section before it will help Vinoth's mark.
// Vinoth's work is to maximize the number of complete sections he can study between now and model practical time.

#include <iostream>
using namespace std;
int main()
{
    int i,n,t,c=0;
    cin>>n>>t;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    
    for(i=0;i<n;i++){
        t-=a[i];
        if(t>=0)
        c++;
        else
        break;
    }
    cout<<c;
	return 0;
}
