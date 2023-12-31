class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans=-1;
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=n;j>=0;j--){
                if(s[i]==s[j]){
                    ans = max(ans, j - i - 1);
                    break;
                }
            }
        }
        return ans;
    }
};
