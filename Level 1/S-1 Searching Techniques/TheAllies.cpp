#include <bits/stdc++.h>
using namespace std;
void solve(){ cout<<"break;";}
int main(){
string s1,s2,s3,s4;
double r;
double h;
cin>>s1>>r>>s2>>s3>>s4;
if(s2=="FEET")
r=r/3.28;
//cout<<r<<endl;
if(s2=="KILOMETERS") r=r*1000;
if(s2=="YARDS") r=r*0.9144;
if(s2=="INCHES") r=r*0.0254;
if(s2=="MILES") r=r*1609.34;
if(s4=="HOUR") r=r/3600;
if(s4=="MINUTE") r=r/60;
if(s2=="CENTIMETERS") r=r/100;
h=r*r/(2*9.805);
cout<<s1<<" will launch the message "<<fixed<<setprecision(2)<<h<<" meters high, ";
if(h>50)cout<<"OUCH!";
else if(h<25)cout<<"SPLAT!";
else cout<<"SUCCESS!";
return 0;}