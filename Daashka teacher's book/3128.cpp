#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    cout<<a[0];
    for(int i=1;i<a.size();i++)
        cout<<"*"<<a[i];
}
