#include<stdio.h>
#include<string.h>
char s[101];

int fun(){
    int n=strlen(s);
    int i=0;
    while(i<n){
        if(s[i]=='h'){
            for(;i<n;i++)
            if(s[i]=='h')
            continue;
            else
            break;

            if(s[i]=='e')
            for(;i<n;i++){
                if(s[i]=='e')
                continue;
                else
                break;
            }
            else
            return 0;

            if(s[i]=='l'&&s[i+1]=='l'){
                for(;i<n;i++){
                if(s[i]=='l')
                continue;
                else if(s[i]=='o')
                return 1;
                else
                return 0;
            }
           return 0;
            
            }

        }

        i++;
    }
    return 0;
}
int main(){
    scanf("%s",s);
    if(fun())
    printf("YES");
    else
    printf("NO");
    return 0;
}

