#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int min=0,max=0,n,ma,mi,f; cin>>n; cin>>f; ma=f; mi=f;
    for(int i=0;i<n;i++)
        {
        cin>>f;
        if(ma<f) {max++; ma=f;} 
        if(mi>f) {min++; mi=f;} 
    }
    cout<<max<<" "<<min;
    return 0;
}
