#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,i,j,t=1,d;
    cin >> n;
       for(i=1;i<=n;i++)
          {
          j=n-t;
           while(j>0)  {cout<<" "; j--; }
           d=t;
           while(d>0)  {cout<<"#"; d--; }
           cout<<"\n"; t++;
          }
    return 0;
}