#include <iostream>
#include<string.h>
using namespace std;
int main(){
    int n,i,j,t;
    cin>>n;
    for(i=0;i<n;i++){
      cout<<"Line "<<i+1<<":"<<endl;
      cin>>t;
      int sum=0;
      for(j=0;j<t;j++){
          
          char name[100];
          cin>>name;
          if(strcmp(name,"donate")==0){
              int d;cin>>d;
              sum+=d;
          }
          else{cout<<sum<<endl;}
          
      }
    }
    return 0;   
}