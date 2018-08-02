#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t=1;
cin>>n;
for(int i=0;;i++)
    if(n>=pow(2,i)) cout<<pow(2,i)<<" ";
    else break;
    return 0;
}
