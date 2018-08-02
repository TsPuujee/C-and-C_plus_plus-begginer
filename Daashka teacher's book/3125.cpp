#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,z;
    unsigned long long i;
    getline(cin,s);
    for (i=0;i<s.size();i++)
        if(s[i]=='1') z=z+"one";
        else z=z+s[i];
    cout<<z;
}

