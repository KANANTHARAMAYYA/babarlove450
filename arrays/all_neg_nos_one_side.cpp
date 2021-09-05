#include <iostream>
using namespace std;

//just find the first positive element make it pivot , apply qsort partition fn. so that all the elements less 
//than it will fall before it .
void partition(int arr[],int l,int n){
    int pivot = 0;
    int pivot_idx;
    for(int i = 0 ;i < n; ++i){
        if(arr[i] > 0){
            pivot = arr[i];
            pivot_idx = i;
            break;
        }
    }
    int sv = pivot_idx;
    for(int i = pivot_idx + 1 ;i < n ;++i){
        if(arr[i] < pivot){
            pivot_idx++;
            int t = arr[i];
            arr[i]= arr[pivot_idx];
            arr[pivot_idx] = t;
        }
    }
    int t = arr[sv];
    arr[sv]= arr[pivot_idx];
    arr[pivot_idx] = t;

}
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    partition(arr,0,n);
    for(int i = 0; i < n; ++i)
        cout<<arr[i]<<" ";

    return 0;
}
