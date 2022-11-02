// Inspector Gadget just installed new springs in his feet and they do not feel like they should, making it where he cannot stop! However the Inspector cannot do the math while stopping himself from crashing into things. Using
// Hooke's Law, F = -xx, please help him find out the F, k, or x value as he requests it.
// Input Format:
// You will receive 3 lines of input. Each line will start with the variable (capital letters only) then the value of that variable. The value will always be a decimal number between 0 and 10,000 (or a question mark).


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,s4,s5,s6;
    cin>>s1>>s2>>s3>>s4>>s5>>s6;
    float a,b,c;
    if(s2=="?"){
        b=stof(s4);
        c=stof(s6);
        //cout<<c;
        cout<<"F "<<fixed<<setprecision(2)<<(-b)*c;
    }
    else if(s4=="?"){
        a=stof(s2);
        c=stof(s6);
        cout<<"K "<<fixed<<setprecision(2)<<a/(-c);
    }
    else
    {
        a=stof(s2);
        b=stof(s4);
        cout<<"X "<<fixed<<setprecision(2)<<a/(-b);
    }
    return 0;
}
