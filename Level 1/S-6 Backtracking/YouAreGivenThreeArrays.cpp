#include <iostream>
#include<bits/stdc++.h>
#define f1 for(i=0;i<n;i++)
using namespace std;
long long int min(long long int x, long long int y){
    if(x < y)
        return x;
    else
        return y;
}
int main(){
    int n, m, K;
    cin >> n >> m >> K;
    long long int a[n],b[n],c[n];
    long long int i,j,l;
    int p,T = 0;
    for(i = 0; i < n; i++)
    cin >> a[i] >> b[i] >> c[i];
    long long int lx,rx,ly,ry,lz,rz;
    cin >> lx >> rx;
    cin >> ly >> ry;
    cin >> lz >> rz;
    for(i = lx; i < min(rx, lx + m); i++){
        for(j = ly; j < min(ry,ly + m);j++){
            for(l = lz;l < min(rz,lz + m);l++){
                T=0;
                for(p = 0; p < n; p++){
                    if((a[p] * i + b[p] * j- c[p] * l) % m == 0)
                    T++;
                }
                if(T==K)
                break;
            }
            if(l < min(rz,lz + m))
            break;
        }
        if(j < min(ry,ly + m))
        break;
 
    }
    if(i < min(rx, lx + m)){
        cout << i << " " << j << " " << l;
    }
    else
    cout << "-1" << endl;
}