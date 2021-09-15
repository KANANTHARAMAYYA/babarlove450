#include <iostream>
using namespace std;

//recur coinchange
int coinchange(int arr[],int total,int n){
    if(n <= 0 or total < 0)
        return 0;
    if(total == 0)
        return 1;
    return coinchange(arr,total-arr[n-1],n) + coinchange(arr,total,n-1);
}

//table coinchange
int tcoinchange(int arr[],int total,int n){
    int dp[coin][total];
    return 0;
}   
int main()
{
    io  s_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    // cin>>n>>m;
    n = 4; 
    int s[] = {1,2,3};
    m = 3;
    cout<<"recursive method : "<<coinchange(s,n,m)<<endl;
    return 0;
}
