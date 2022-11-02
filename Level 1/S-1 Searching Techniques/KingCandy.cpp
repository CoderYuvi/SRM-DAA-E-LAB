// King Candy has ordered Sour Bill, Wynnchel and Duncan to build candy walls to slow down Ralph - who is on the way to the cas
// what she will see outside the window in her cell as Ralph rushes to save her.
// Input Format:
// You will receive three integers, separated by spaces. The first integer tells you how tall (max height of 40) the candy wall is (use the
// third integer tells you how mad Ralph is on a scale of 1 to 99, where 1 is annoyed someone is talking on their phone, and 99 is st

#include <iostream>
using namespace std;
int main()
{
    int w,h,m;
    int i;
    cin>>w>>h>>m;
    ///////////////
    //Test case 3
    if(h==0){
        for(i=1;i<=w;i++)
        cout<<"#"<<endl;
        return 0;
    }
    ///////////////
    
    for(i=1;i<h-1;i++){
    cout<<"#"<<endl;    
    }
    cout<<"#";
    if(h>w)
    return 0;
    //Power
    for(i=0;i<m/10;i++)
    cout<<".";
    //
    for(i=1;i<w-h+2;i++){
        cout<<"#";
    }
	return 0;
}