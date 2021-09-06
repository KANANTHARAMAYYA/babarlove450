#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr1[] = { 1, 3, 4, 5,10,0,0,0,0}, arr2[] = {2, 4, 6, 8}; 
  int n = 4,m =3;
  int t = 8;
    while(n > 0 or m > 0){
        cout<<arr1[n]<<" "<<arr2[m]<<" "<<endl;
        if(arr1[n] > arr2[m])
            arr1[t--] = arr1[n--];
        else
            arr1[t--] = arr2[m--];
    for(int i = 0; i < 9; ++i)
        cout<<arr1[i]<<" ";
    cout<<endl;
    }
    //clean the left overs very important
    while(m>=0)
        arr1[t--] = arr2[m--];
    for(int i = 0; i < 9; ++i)
        cout<<arr1[i]<<" ";
    cout<<endl;
  return 0;
}