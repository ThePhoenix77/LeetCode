class Solution {
public:
    bool isVowel(char c){
        string vows="aeiouAEIOU";
        if(vows.find(c)!=string::npos) return true;
        return false;
    }
    int vCount(string s){
        int count=0;
        for(int i=0;i<s.size();i++) if(isVowel(s[i])) count++;
        return count;
    }
    bool doesAliceWin(string s) {
        if(vCount(s) % 2 != 0) return true;
        if(vCount(s) == 0) return false;
        int n=s.size();
        int i=n-1;
        for(i;i>=0;i--){
            if(isVowel(s[i]))
                if(vCount(s.substr(0, i + 1)) % 2 != 0) break;
        }
        if(vCount(s.substr(i)) % 2 != 0) return false;
        return true;
    }
};
