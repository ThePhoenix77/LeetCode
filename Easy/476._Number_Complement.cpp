class Solution {
public:
    string to_binary(int n){
        string ans="";
        while(n>0){
            int d=n%2;
            n/=2;
            ans+=to_string(d);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string complement(string s){
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') s[i]='1';
            else s[i]='0';
        }
        return s;
    }
    int to_dec(string s){
        return stoi(s, nullptr, 2);
    }
    int findComplement(int num) {
        return to_dec(complement(to_binary(num)));
    }
};
