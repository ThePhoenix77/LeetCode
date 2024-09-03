class Solution {
public:
    int getLucky(string s, int k) {
        string digits;
        for (char c : s) digits+=to_string(c-'a'+1);
        for (int i=0;i<k;++i){
            int sum = 0;
            for (char d : digits) sum+=d-'0';
            digits=to_string(sum);
        }
        return stoi(digits);
    }
};
