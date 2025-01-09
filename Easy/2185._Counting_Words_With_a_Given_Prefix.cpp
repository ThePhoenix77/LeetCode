class Solution {
public:
    bool start_with(string word, string pref){
        auto res = mismatch(pref.begin(), pref.end(), word.begin());
        return (res.first == pref.end());
    }
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for(int i=0;i<words.size();i++) if (start_with(words[i], pref)) ans++;
        return ans;
    }
};
