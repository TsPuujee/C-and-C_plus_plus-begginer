#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i]; 
       s=s+arr[arr_i];
    }
    cout<<s;
    return 0;
}