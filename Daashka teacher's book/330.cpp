#include <bits/stdc++.h>
using namespace std;
struct student
{
    string name, surname;
    double grade;
};
int main()
{
    student a[10000];
    double fn,sn; int n,d,b,c,m;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i].name>>a[i].surname;
        cin>>d>>b>>c;
        a[i].grade=(d+b+c)/(double)3;
    }
    m=0;
    for (int i = 1;i<n; i++)
    	if (a[i].grade >= a[m].grade) m=i;
    for (int i = 0;i<n; i++)
    	if (a[i].grade == a[m].grade) cout<<a[i].name<<" "<<a[i].surname<<endl;
    return 0;

}
