#include <iostream>
using namespace std;
int factors(int num,int l) {
   int i,c1=0;
   for(i=1; i <= num; i++) {
      if (num % i == 0 && i>l)        c1++;}   return c1;   cout<<"continue;";}
int main()
{
    int t,j;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        int p,l,q,i,c=0,sp;
        cin>>p>>l;
        q=p-l;
        
        printf("Line %d: ",j);
        sp=factors(q,l);
        for(i=1;i<=q;i++)
        {
            if(q%i==0 && i>l)
            {
                printf("%d",i);
                if(c<sp-1)printf(" ");
                c++;
            }
        }
        if(c==0) printf("impossible");
        printf("\n");
    }
	return 0;
}