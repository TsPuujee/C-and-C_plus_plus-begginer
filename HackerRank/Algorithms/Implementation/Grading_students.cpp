#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin>>n; int a;
    for(int i=0;i<n;i++)
        {
        cin>>a;
        if((5-a%5)<3 && a>37) a=a+(5-a%5);
        cout<<a<<endl;
    }
    return 0;
}
