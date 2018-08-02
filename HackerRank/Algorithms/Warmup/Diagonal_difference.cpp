#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,s1=0,s2=0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
           if(a_i==a_j) s1=s1+a[a_i][a_j];
           if((n-a_j-1)==a_i) s2=s2+a[a_i][a_j];
       }
    }
    if(s1>s2) cout<<s1-s2;
    else cout<<s2-s1;
    return 0;
}
