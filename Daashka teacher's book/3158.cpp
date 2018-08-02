#include<bits/stdc++.h>
using namespace std;
int main(){
     long long i=0,t,a[100000],maxi;
    while(cin>>t){
        a[i++]=t;
    }
   // cout<<i;
    maxi=i;
    for(int j=i-1;j>=0;j--)
        if(a[maxi]<=a[j]) maxi=j;
    cout<<a[maxi]<<" "<<maxi;

}
