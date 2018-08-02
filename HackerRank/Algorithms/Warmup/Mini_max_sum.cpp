#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long a[6],i,min=0,max=0,sum=0;
    cin>>a[0]; sum=a[0];
    for(i=1;i<5;i++)
        {
        cin>>a[i];
        if(a[min]>a[i]) min=i;
        if(a[max]<a[i]) max=i;
        sum=sum+a[i];
    }
    cout<<sum-a[max]<<" "<<sum-a[min];
    return 0;
}
