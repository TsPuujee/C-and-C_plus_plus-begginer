#include <bits/stdc++.h>
using namespace std;
void printSpiral(string a,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            x = min(min(i, j), min(n-1-i, n-1-j));
            if (i <= j){
                    if(a.size()-1<((n-2*x)*(n-2*x) - (i-x) - (j-x)-1)) cout<<"+ ";
                    else cout<<a[((n-2*x)*(n-2*x) - (i-x) - (j-x))-1]<<" "; }
            else
                {
                    if(a.size()-1<((n-2*x-2)*(n-2*x-2) + (i-x) + (j-x))-1) cout<<"+ ";
                    else cout<<a[((n-2*x-2)*(n-2*x-2) + (i-x) + (j-x))-1]<<" ";
                }
        }
        printf("\n");
    }
}

int main()
{
    string a;
    cin>>a;
    int n,i=0;
    n=a.size();
    while(n>=i*i) i++;
    cout<<i<<endl;
    printSpiral(a,i);
    return 0;
}
