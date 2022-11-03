#include <bits/stdc++.h>
using namespace std;
void solve(){
    cout<<"return(l-2*x)*(b-2*x)*x;";
}
int main()
{
    int tc;
    double a, b, c, res, l, w, x;
    scanf(" %d", &tc);
    while(tc--) {
        scanf(" %lf %lf", &l, &w);
        a = 12.0;
        b = -4.0 * (l+w);
        c = l*w;
        x = (-b - sqrt (b*b - 4.0*a*c)) / (2.0*a);
        res = (l - 2*x) * (w - 2*x) * x;
        printf ("%.9f\n", res);
    }
    return 0;
}