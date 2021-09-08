#include<bits/stdc++.h>
using namespace std;

//crazy idea , not so crazy after thought though

int main(){
    int arr[] = {2, 4, 7, 9, 2, 4};
    int n = sizeof(arr) / sizeof(*arr);
    int xoor = 0;
    for(auto x : arr)
      xoor = xoor ^ x;
    
    //crazy step getting right most set bit
    int set_rightmost_bit = xoor & (~(xoor-1));
    int x=0,y=0;
    for(int i = 0; i < n; ++i){
        if(arr[i] & set_rightmost_bit)
            x = x ^ arr[i];
        else
            y = y ^ arr[i];
    }
    cout<<x<<" "<<y<<endl;
  return 0;
}