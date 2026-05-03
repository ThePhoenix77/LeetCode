class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int abc[26] = {0};
        for (char c:magazine)
            abc[c - 97]+=1;
        for (char c:ransomNote){
            if(abc[c - 97] >= 1){
                abc[c - 97]-=1;
                continue;
            }
            else return false;
        }
        return true;
    }
};
