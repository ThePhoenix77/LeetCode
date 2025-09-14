class Solution {
public:
    bool isVowel(char c){
        string vows="aeiouAEIOU";
        if(vows.find(c)!=string::npos) return true;
        return false;
    }
    int maxFreqSum(string s) {
        int n=s.size();
        unordered_map<char, int> cmap;
        for(char c : s) cmap[c]++;
        int vmax=0, cmax=0;
        for(int i=0;i<n;i++){
            if(isVowel(s[i])) vmax=max(vmax, cmap[s[i]]);
            else cmax=max(cmax, cmap[s[i]]);
        }
        return vmax + cmax;
    }
};
