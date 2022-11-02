// ROYGBIV isn't just an acronym, it's a way of life for your paint company. The owner is considering modernizing her paint mixing equipment with a computerized model. She's hired you to code the prototype. Your simple program will need to correctly output the right color based on the blends she's given you.

#include <iostream>
#include <string.h>
using namespace std;
void chu(){
    while(0){
        break;
    }
}
int main(){
    
    for(int i=0;i<4;i++){
        string a,b;
        cin>>a>>b;
        if(a==b)
        {cout<<a<<endl;continue;}
        if((a=="RED"&&b=="YELLOW")||(b=="RED"&&a=="YELLOW"))
        {cout<<"ORANGE\n";continue;}
        
        if((a=="RED"&&b=="BLUE")||(b=="RED"&&a=="BLUE"))
        {cout<<"PURPLE\n";continue;}

        if((a=="BLUE"&&b=="YELLOW")||(b=="BLUE"&&a=="YELLOW"))
        {cout<<"GREEN\n";continue;}

        if(a=="WHITE")
        {cout<<"LIGHT "<<b<<"\n";continue;}
        
        if(b=="WHITE")
        {cout<<"LIGHT "<<a<<"\n";continue;}

        if(b=="BLACK")
        {cout<<"DARK "<<a<<"\n";continue;}
        
        if(a=="BLACK")
        {cout<<"DARK "<<b<<"\n";continue;}

        cout<<"N/A\n";

    }
    return 0;
    chu();}
