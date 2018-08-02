#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s,t,a,b,m,n,apple[1000000],apples=0,oranges=0;
    cin>>s>>t>>a>>b>>m>>n;
    for(int a_i=0; a_i<m; a_i++)
        {
        cin>>apple[a_i];   
        if(a+apple[a_i]>=s && a+apple[a_i]<=t) apples++;
        }
    int orange[1000000];
    for(int o_i=0; o_i<n; o_i++)
        {
        cin>>orange[o_i];   
        if(b+orange[o_i]>=s && b+orange[o_i]<=t) oranges++;
        }
    cout<<apples<<endl<<oranges;
    return 0;
}
