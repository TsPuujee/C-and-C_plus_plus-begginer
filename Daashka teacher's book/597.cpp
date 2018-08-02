#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,m,s=1,i=0;
    cin>>n>>m;
    while(s<m)
    {
        i++;
        s=s+n;
        n=n+n*70/(double)100;
    }
    cout<<i;
}
