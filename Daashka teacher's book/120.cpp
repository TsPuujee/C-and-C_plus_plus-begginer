#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i,n,c;
    double b=0;
    cin>>n;
    while (n>30){
    n=n-1;
    b=1;
    c=1;
    for(i=1;i<=n;i++){
    c=c*i;
    b=b+1/c; }
    }
cout<<b;
}
