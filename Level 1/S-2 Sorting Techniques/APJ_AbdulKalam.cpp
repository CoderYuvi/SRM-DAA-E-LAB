// Avul Pakir Jainulabdeen Abdul Kalam (1st Principal Scientific Adviser to the Government of India). He passed away on 27 July 2015. May he rest in peace. This problem is dedicated to APJ Abdul Kalam. He will be in our hearts, always.
// Actor Vivek plan to build an Educational Trust for poor students. Initially the total number of student is 0 and in each time, two types of proposals will be there:
// 1. donate E (100 ≤ E ≤ 10^5), then you have to add E to the trust.
// 2. report, report all the student currently in the trust.

#include <iostream>
using namespace std;
int main(){
    int t,line=0;
    cin>>t;
    while(t--){
        cout<<"Line "<<++line<<":\n";
        int n,i;
        cin>>n;
        char s[6];
        int total=0,donate;
        for(i=0;i<n;i++){
            cin>>s;
            if(s[0]=='d'){
                cin>>donate;
                total+=donate;
            }
            else
            cout<<total<<endl;
        }
    }
    return 0;
}