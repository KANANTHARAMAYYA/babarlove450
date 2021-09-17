//leecode
class Solution {
public:
    string getcounts(string s){
        char prev = s[0];
        string gen = "";
        int c = 1;
        for(auto i = 1; i < s.size(); ++i){
            if(prev == s[i]){
                c++;
            }
            else{
                gen+= (c+'0');cout<<c<<endl;
                gen+= prev;
                prev = s[i];
                c = 1;                
            }
        }
        gen+=(c+'0');
        gen+=prev;
        return gen;
    }
  
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        return getcounts(countAndSay(n-1));
    }
};