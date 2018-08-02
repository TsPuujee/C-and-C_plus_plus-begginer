#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
        int max = 0,t=0,a[100000];    
        for(int i=0; i < n; i++){
            cin>>a[i];
            if(max<a[i]) max=a[i];
        }
    for(int i=0;i<n;i++)
        if(a[i]==max) t++;
    cout<<t;
}