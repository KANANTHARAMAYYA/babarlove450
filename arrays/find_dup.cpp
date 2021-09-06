#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  set<int> s;
  int nums[] = {1,3,4,2,2};
    int sum = 0;
    int x;
    for(int i = 0; i < 5 ;++i){
        x = nums[i];
        sum+=x;
        s.insert(x);
        }
    int s2 = 0;
    for(auto x : s)
        s2 += x;
    cout<<sum-s2<<endl;
  return 0;
}