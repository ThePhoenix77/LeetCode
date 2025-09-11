class Solution {
public:
    bool isVowel(char c){
        string vows="aeiouAEIOU";
        if(vows.find(c)!=string::npos) return true;
        return false;
    }
    string sortVowels(string s) {
        string ans="";
        string vows="";
        int n=s.size();
        for(int i=0;i<n;i++)
            if(isVowel(s[i])) vows+=s[i];
        sort(vows.begin(), vows.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                ans+=vows[j];
                j++;
            }
            else
                ans+=s[i];
        }
        return ans;
    }
};
