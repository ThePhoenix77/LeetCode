class Solution {
public:
    int isVowel(char ch){
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }
    bool halvesAreAlike(string s) {
        bool ans=false;
        int n=s.length();
        int vacount=0;
        int vbcount=0;
        string a;
        string b;
        // vector<char> av;
        // vector<char> bv;
        for(int i=0;i<(n/2);i++){
            a+=s[i];
            if(isVowel(s[i])) vacount++;
            //if(isVowel(s[i])) av.push_back(s[i]);
        }
        for(int i=(n/2);i<n;i++){
            b+=s[i];
            if(isVowel(s[i])) vbcount++; 
            //if(isVowel(s[i])) bv.push_back(s[i]);
        }
        (vacount == vbcount)?  ans=true : ans=false;
        //(av == bv)?  ans=true : ans=false;
        return ans;
    }
};
