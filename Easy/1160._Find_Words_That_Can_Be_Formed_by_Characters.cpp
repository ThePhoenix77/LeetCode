class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int res=0;
        for(auto& word : words){
            string tmp=chars;
            bool valid=true;
            for(char c : word){
                auto pos=tmp.find(c);
                if(pos!=string::npos) tmp.erase(pos, 1);
                else {
                    valid=false;
                    break;
                }
            }
            if(valid) res += word.size(); 
       }
       return res;
    }
};
