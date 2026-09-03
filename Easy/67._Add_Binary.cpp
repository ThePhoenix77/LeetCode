class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size();
        int m=b.size();
        int plus=0;
        string ans="";
        while(plus || n>0 || m>0){
            int sum=plus;
            if(n>0) {sum+=a[n - 1] - '0', n--;}
            if(m>0) {sum+=b[m - 1] - '0', m--;}
            ans+=char(sum%2 + '0');
            plus=sum/2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
