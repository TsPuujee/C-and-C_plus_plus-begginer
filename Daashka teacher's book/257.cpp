#include<bits/stdc++.h>
using namespace std;
int main(){
int n,n1,m,m1;
cin>>n>>n1>>m>>m1;
if((abs(n-m)==1 && abs(n1-m1)==2) || (abs(n-m)==2 && abs(n1-m1)==1)) cout<<"YES";
else cout<<"NO";
}
