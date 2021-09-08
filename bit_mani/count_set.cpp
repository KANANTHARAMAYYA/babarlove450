#include<bits/stdc++.h>
using namespace std;

int main(){
  int ans=0;
  int n;
  cin>>n;
  int i = 0;
  while(i++ < 32){
      if(n & (1 << i))
          ans++;
  }
  cout<<ans<<endl;
  return 0;
}