#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    char time[10],time1[8];
    int i;
    cin>>time;
    for(i=0;i<8;i++) time1[i]=time[i];
    if(time[8]=='P')
        if(time[0]=='0' || (time[0]=='1' && time[1]=='1')){ time1[0]++; time1[1]=time1[1]+2; }
    
    if(time[8]=='A')
        if(time[0]=='1' && time[1]=='2') { time1[0]='0'; time1[1]='0';}
    
    cout << time1;
    return 0;
}
