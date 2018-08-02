#include<bits/stdc++.h>
using namespace std;
int main(){
int t=0,i,j,m,n,maxi=0,maxj=0,s;
cin>>n>>m; int a[n][m]; cin>>a[0][0];
for(i=0;i<n;i++)
    for(j=0;j<m;j++){
        if(i==0 && j==0) i=i;
            else { cin>>a[i][j];
        if(a[i][j]>a[maxi][maxj]) { maxi=i; maxj=j; }}
    }
 for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    if(a[i][j]==a[maxi][maxj]) t++;
cout<<t;
}
