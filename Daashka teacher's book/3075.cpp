#include<iostream>
using namespace std;
int main()
{
    unsigned long long  n,a=1,b=1,d=2,c=0;
    cin>>n;
while(c<n){
    d=d+1;
    c=a+b;
    a=b;
    b=c;}
if(c>n)cout<<-1;
else cout<<d;
    return 0;
}

