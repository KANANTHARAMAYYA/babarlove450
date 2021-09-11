#include<bits/stdc++.h>
using namespace std;

int main(){

    int bits[32] = {0};
    int n;
    cin>>n;
    int i = 0;
    while(i < 32){
        bits[i] += (1 << n);

    }
    

    return 0;
}