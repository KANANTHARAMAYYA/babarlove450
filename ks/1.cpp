#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int tc = 1;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int lleft = INT_MAX;
        int lright = INT_MAX;
        vector<int> v;
        for(int i = 0; i < n; ++i)
            if(s[i] == '1')
                v.push_back(i);
        if(v.size()> 0)
        lleft = v[0];
        if(v.size()>1)
        lright = v[1];
        int k = 2;
        int ans = 0;
        for(int i = 0 ;i <n ; ++i){
            ans += min(abs(lleft-i),abs(lright-i));
            if(i >= lright and lright!=INT_MAX){
                lleft = lright;
                if(k < v.size())
                lright = v[k++];
                else
                lright = INT_MAX;
            }
        }
        cout<<"Case #"<<tc<<": "<<ans<<endl;
        tc++;
    }
    return 0;
}