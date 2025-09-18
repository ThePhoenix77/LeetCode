class Solution {
public:
    bool isVowel(char c){
        return string("aeiouAEIOU").find(c) != string::npos;
    }
    string toGoatLatin(string sentence) {
        string ans="";
        stringstream ss(sentence);
        string word;
        int count=0;
        while(ss>>word){
            count++;
            char c = word[0];
            if(!isVowel(c)) {
                word.erase(0, 1);
                word+=c;
            }
            word+="ma";
            for(int i=0;i<count;i++) word+='a';
            ans+=word + " ";
        }
        ans.pop_back();
        return ans;
    }
};
