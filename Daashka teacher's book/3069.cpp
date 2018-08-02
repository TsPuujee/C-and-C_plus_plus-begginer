#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t=1;
cin>>n;
if((n != 0) && !(n & (n - 1))) cout<<"YES";
else cout<<"NO";
    return 0;
}
