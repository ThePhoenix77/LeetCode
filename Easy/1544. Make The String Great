class Solution {
public:
    bool vald(char c, char v){
        return(isupper(c) && islower(v) || islower(c) && isupper(v));
    }
    string makeGood(string s) {
        int n=s.size();
        int i=0;
        
        while(i<n-1){
            if(vald(s[i], s[i+1]) && toupper(s[i])==toupper(s[i+1])){
                s.erase(i, 2);
                n-=2;
                if 
                (i>0) i--;
            } else i++;
        }
        return s;
    }
};
