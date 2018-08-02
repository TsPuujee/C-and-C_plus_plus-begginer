#include<iostream>
using namespace std;
int main()
{
long a,b,x;
double x1;
cin>>a>>b;
if(a==0 && b==0) cout<<"INF";
else {
x1=(-b/(float)a); x=x1;
if(x==x1) cout<<x;
else cout<<"NO"; }
   return 0;
}
