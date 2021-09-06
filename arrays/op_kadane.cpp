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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[] = {10, 7, -8, -9, 1, 5,11};   
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"max subarray sum : "<<op_kadane(arr,n)<<endl;
    return 0;
}
