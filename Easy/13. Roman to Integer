class Solution {
public:
    int cvt(char c){
        int n;
        switch(c){
            case 'I':
                n=1;
                break;
            case 'V':
                n=5;
                break;
            case 'X':
                n=10;
                break;
            case 'L':
                n=50;
                break;
            case 'C':
                n=100;
                break;
            case 'D':
                n=500;
                break;
            case 'M':
                n=1000;
                break;
            default:
                n=0;
        }
        return n;
    }
    int romanToInt(string s) {
        int num = 0;
        for (int i = 0; i < s.size(); i++) {
            int n = cvt(s[i]);
            if (i > 0 && n > cvt(s[i - 1])) num += n - 2 * cvt(s[i - 1]);
            else num += n;
        }
        return num;
    }
};
