class Solution {
public:
    bool isPalindrome(string s) {
        bool ans=true;
        string simplifiedInput="";
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])) s[i]=tolower(s[i]);
        }
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])) simplifiedInput+=s[i];
        }
        for(int i=0;i<simplifiedInput.size();i++){
            if(simplifiedInput[i] != simplifiedInput[simplifiedInput.size() - i - 1]){
                ans=false;
                break;
            }
        }
        return ans;
    }
};
