#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m; int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==0 || j==0) a[i][j]=1;
            else a[i][j]=a[i-1][j]+a[i][j-1];
            cout<<a[i][j]<<" ";
        }
    cout<<"\n";
    }
    return 0;
}

