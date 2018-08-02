#include<bits/stdc++.h>
using namespace std;
int main(){
int a[100000],t,i,j,m,n,maxi=0,s;
cin>>n>>m;
for(i=0;i<n;i++){ s=0;
    for(j=m;j>0;j--)
        { cin>>t; s=s+t; }
        a[i]=s;
        //cout<<a[i]<<" ";
        if(a[i]>a[maxi]) maxi=i;
}
cout<<a[maxi]<<"\n"<<maxi;
}
