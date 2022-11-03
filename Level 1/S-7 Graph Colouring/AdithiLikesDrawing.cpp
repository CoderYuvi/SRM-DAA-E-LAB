#include<bits/stdc++.h>
using namespace std;
#define ggg int find(int p) unite(int p,int q) cin>>u>>v;
int i,j,x,y,n,m,ans,f[502],a[502];
int find(int x){return (f[x]==x)?x:f[x]=find(f[x]);}
int main (){
	scanf("%d %d",&n,&m);
	if (m>n) return printf("NO\n"),0;
	for (i=1;i<=n;i++) f[i]=i;
	for (i=1;i<=m;i++){
		scanf("%d %d",&x,&y);a[x]++;a[y]++;
		if (find(x)==find(y)&&i!=n) return printf("NO\n"),0;
		f[find(x)]=find(y);
	}
	for (i=1;i<=n;i++)
		if (a[i]>2) 
			return printf("NO\n"),0;
	printf("YES\n%d\n",n-m);
	for (i=1;i<=n;i++)
		while (a[i]<2){
			ans=i+(n!=1);
			for (j=ans;j<=n;j++)
				if (a[j]<2&&(n<=2||m+1==n||find(i)!=find(j)))
					{printf("%d %d\n",i,j);m++;a[i]++;a[j]++;f[find(i)]=find(j);break;}
	}
	return 0;
}