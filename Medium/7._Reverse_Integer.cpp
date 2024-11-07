class Solution {
public:
    int ft_stoi(string str)
    {
        long long ans=0;
        int sign=1;
        if(str[0]=='-') {sign=-1;str.erase(0, 1);}
        std::reverse(str.begin(), str.end());
        for (char ch : str) {
            int dig=ch-'0';
            if(ans>(INT_MAX-dig)/10) return 0;
            ans=ans*10+dig;
        }
        return sign*ans;
    }
    int reverse(int x) {
        return ft_stoi(to_string(x));
    }
};
