#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long s=1,i,a,n;
    cin>>a>>n;
    for(i=1;i<=n;i++)
        s=s+pow(a,i);
    cout<<s;
}
