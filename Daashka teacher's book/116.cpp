#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,mi=9,ma=0,t;
    cin>>a; t=a;
    while(t){
        if(t%10>ma) ma=t%10;
        if(t%10<mi) mi=t%10;
        t=t/10;
    }
    cout<<mi<<" "<<ma;
}
