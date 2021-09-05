#include <iostream>
using namespace std;

//recur coinchange
int coinchange(int arr[],int total,int n){
    cout<<total<<endl;
    if(n == 0 or total < 0)
        return 0;
    if(total == 0)
        return 1;
    int ways = 0;
    for(int i = 0; i < n; i++){
        if(total- arr[i]> 0){
            ways += coinchange(arr,total-arr[i],n-1) + coinchange(arr,total,n-1);
        }
    }
    return ways;
}

//table coinchange
int tcoinchange(int arr[],int total,int n){
    return 0;
}   
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    n = 4 ; m = 3;
    int s[] = {1,2,3};
    cout<<"recursive method : "<<coinchange(s,n,m)<<endl;
    return 0;
}
