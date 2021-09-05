#include <iostream>
using namespace std;

//recur coinchange
int coinchange(int arr[],int total,int n){
    if(n <= 0 or total < 0)
        return 0;
    if(total == 0)
        return 1;
    return coinchange(arr,total-arr[n],n) + coinchange(arr,total,n-1);
}

//table coinchange
int tcoinchange(int arr[],int total,int n){
    return 0;
}   
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    // cin>>n>>m;
    n = 4; 
    m = 3;
    int s[] = {1,2,3};
    cout<<"recursive method : "<<coinchange(s,n,m-1)<<endl;
    return 0;
}
