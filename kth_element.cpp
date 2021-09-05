//uses quick select algo
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[],int l,int r){
    //choose a random element call it pivot
    int pivot = arr[r];
    int i = l;
    for(int j = l; j< r;++j){
        if(arr[j]<= pivot){
            swap(&arr[i],&arr[j]);
                        i++;

        }
    }
    swap(&arr[i+1],&arr[r]);
    return (i+1);
}

int kth_element(int arr[],int l,int r, int k){
    if(k> 0 and k < r - l + 1){
        int i = partition(arr,l,r);
        if(i - l == k - 1)
            return arr[i];
        if (i - l > k - 1)
			return kth_element(arr, l, i - 1, k);

		return kth_element(arr, i + 1, r, k - i + l - 1);
    }
    else
    return INT_MAX;
}

int main(){
    int n,k;
    //cin>>n>>k;
    k = 4;
    n = 6;
    int arr[] = {10, 7, 8, 9, 1, 5};    
    // for(int i =0 ;i < n; ++i)
    //     cin>>arr[i];
    cout<<kth_element(arr,0,n-1,k)<<endl;
    return 0;
}