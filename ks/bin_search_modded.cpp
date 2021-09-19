#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int x;
    cin>>x;
    int arr[] = {1,2,3,4,5,6,6,6,8};
    n = arr.size();
    int first = 0;
    int last = n - 1;
    int mid = (first + last) / 2;
    int fpos = 0;
    int lpos = 0;
    while(first <= last){
        mid = (first + last) / 2;
        if(arr[mid] == x and a[mid-1]!=x)
            fpos = mid;
        if(arr[mid] == x and a[mid+1]!=x)
            lpos = mid;
        else if(arr[mid] > x)
            first = mid;
        else
            last = mid;
    }
    cout<<fpos<<" "<<lpos<<endl;
    return 0;
}