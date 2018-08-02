#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0,a,b;
    cin>>b;
    while(cin>>a)
    {
        if(a!=b) t++;
        b=a;
    }
    cout<<t+1;
}
