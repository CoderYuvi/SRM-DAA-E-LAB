// Note : Run code in c.

#include <stdio.h>
void fun(){
    int n; char s[109];
        scanf("%d",&n);
         int cb=-1,f=0,i=0;
        //for(i=0;i<=n;i++)
        while(i<=n){
        scanf("%c",&s[i++]);
        }
        //for(j=0;j<=n;j++)
        i=0;
        while(i<=n){
            if(s[i]=='(')
            f++;
            else{
                if(f==0)
                cb++;
                else
                f--;
            }
            i++;
        }
        printf("%d\n",cb);
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
       fun();
    }
    return 0;
}