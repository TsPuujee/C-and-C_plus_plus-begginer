#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    reverse(arr.begin(),arr.end());
    for(int arr_i = 0;arr_i < n;arr_i++){
       cout<<arr[arr_i]<<" ";
    }
    return 0;
}
