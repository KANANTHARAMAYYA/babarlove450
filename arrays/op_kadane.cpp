#include<bits/stdc++.h>
using namespace std;

int op_kadane(int arr[],int n){
    int sum=0;
    int ans = INT_MIN;
    for(int i = 0; i < n ; ++i){
        sum += arr[i];
        ans = max(ans,sum);
        sum = max(sum,0);
    }
    return ans;
}
int presummethod(int arr[],int n){
    int pref[n];
    pref[0] = arr[0];
    for(int i = 1; i < n ;++i){
        pref[i] = (pref[i-1] + arr[i]);
    }
    int min_so_far = 0;
    int ans = INT_MIN;
    for(int i = 0; i < n; ++i){
        if(min_so_far!=INT_MIN){
            ans = max(ans,pref[i]-min_so_far);
            min_so_far = min(min_so_far,pref[i]);
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[] = {10, 7, -8, -9, 1, 5,11};   
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"max subarray sum : "<<op_kadane(arr,n)<<endl;
    cout<<"max subarray errichto : "<<presummethod(arr,n)<<endl;
    return 0;
}
