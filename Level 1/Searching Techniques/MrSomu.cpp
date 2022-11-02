// Mr Somu has another problem for Agi today. He has given him three positive integers B, N and R and wants him to calculate the remainder when BẠN! is divided by R. As usual, N! denotes the product of the first N positive integers.

#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n){
    int fact=1;
    while(n){
        fact*=n;
        n--;
    }
    return fact;
    if(n%2==1);
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int b,n,r;
        cin>>b>>n>>r;
        n = factorial(n);
        b = pow(b,n);
        cout<<b%r<<endl;
    }

    return 0;
}