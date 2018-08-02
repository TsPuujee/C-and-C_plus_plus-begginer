#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,m,h; cin>>s;
    cout<<"It is "<<s/60/60<<" hours "<<(s-((s/60/60)*60*60))/60<<" minutes.";
}
