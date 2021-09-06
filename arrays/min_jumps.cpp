#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i= 0 ;i < n; ++i){
        arr[i]+=i;
    }
    int glo_min;
    int ans;
    int loc_min;
    int curr_pos = 0;
    //question is is there an element towards the right that sums to infinity
    for(int i = 0;i < n; ++i){
        loc_min += 1;
        curr_pos = arr[i];
        glo_min = min(loc_min,glo_min);
    }
    return 0;
}