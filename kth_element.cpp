//uses quick select algo
#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int a,int b){

}
int partition(int arr[],int l,int r){
    //choose a random element call it pivot
    int pivot_idx = l;
    int a,b;
    cout<<"before partition"<<endl;
      for(int i = l ; i <= r; ++i)
        cout<<arr[i]<<" ";
        cout<<endl;
    for(int i = pivot_idx+1; i <=r; ++i){
        if(arr[i] <= arr[l]){
            pivot_idx++;
            a = i;
            b = pivot_idx;
                int t = arr[a];
    arr[a] = arr[b];
    arr[b] = t;
        }
    }   
    a = l;
    b = pivot_idx;
        int t = arr[a];
    arr[a] = arr[b];
    arr[b] = t;
    cout<<"after partition"<<endl;
       for(int i = l ; i <= r; ++i)
        cout<<arr[i]<<" ";
        cout<<endl;
 
    return pivot_idx;
}

int kth_element(int arr[],int l,int r, int k){
    if(k> 0 and k <= r - l + 1){
        int i = partition(arr,l,r);
        if(i - l == k - 1)
            return arr[i];
        if (i - l > k - 1)
			return kth_element(arr, l, i - 1, k);

		return kth_element(arr, i + 1, r, k - i + l - 1);
    }
    return INT_MAX;
}

int main(){
    int n,k;
    //cin>>n>>k;
    k = 1;
    n = 7;
    int arr[] = {10, 7, 8, 9, 1, 5,11};    
    // for(int i =0 ;i < n; ++i)
    //     cin>>arr[i];
    cout<<kth_element(arr,0,n-1,k)<<endl;
    return 0;
}