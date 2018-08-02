#include<iostream>
using namespace std;
int fal(int a){
int b=a,s=0;
while(b){
    s=s*10+b%10;
    b=b/10;
}
if(s==a) return 1;
else return 0;
}
int main()
{
    int n,m,i,j,t=0;
    cin>>n;
    for(i=1;i<=n;i++)
        if(fal(i)==1) t++;
    cout<<t;
    return 0;
}

