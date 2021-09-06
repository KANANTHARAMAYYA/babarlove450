#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    k = 2;
    int arr[] = {1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    map<int,int> mp;
    int ans = 0;
    for(int i = 0 ;i <n; ++i){
        if(mp[k - arr[i]])
            ans += mp[k-arr[i]];
        mp[arr[i]]++;
    }
    cout<<ans<<endl;
  return 0;
}