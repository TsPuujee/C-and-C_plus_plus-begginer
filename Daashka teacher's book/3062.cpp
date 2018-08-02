#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,m,s=0;
    cin>>n>>m;
    if(m<=n) cout<<1;
    else
    for(int i=1;;i++)
    {
        s=s+n/(double)10;
        n=n+n/(double)10;
        if(n>=m) {cout<<i+1; break; }
    }

}
