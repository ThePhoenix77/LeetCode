class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        stringstream ss(text);
        string word;
        int count=0;
        int n=brokenLetters.size();
        while(ss>>word){
            bool poss=true;
            for(int j=0;j<n;j++){
                if(word.find(brokenLetters[j]) != string::npos){
                    poss=!poss;
                    break;
                }
            }
            if(poss) count++;
        }
        return count;
    }
};
