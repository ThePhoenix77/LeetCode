class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0, j=0;string ans="";
        while(true){
            if (word1[i] != '\u0000') {ans+=word1[i]; i++;}
            if (word2[j] != '\u0000') {ans+=word2[j];j++;}
            if(i==word1.size() && j==word2.size()) break;
        }
        return ans;
    }
};
