class Solution {
public:
    long long gcd(long long x, long long y){
        if(y==0) return x;
        return gcd(y, x % y);
    }
    long long lcm(long long x, long long y){
        return (x / gcd(x, y)) * y;
    }
    bool nonCoprime(long long x, long long y){
        return (gcd(x, y) > 1);
    }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> st;
        for(int i=0;i<nums.size();i++){
            while(!st.empty() && nonCoprime(st.back(), nums[i])){
                nums[i] = lcm(st.back(), nums[i]);
                st.pop_back();
            }
            st.push_back(nums[i]);
        }
        return st;
    }
};
