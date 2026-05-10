class Solution {
public:
    long long strtoll(std::string s) {
        long long res = 0;
        for (char c : s) res = res * 10 + (c - '0');
        return res;
    }
    long long concatenate(int n1, int n2){
        string s = to_string(n1) + to_string(n2);
        return strtoll(s);
    }
    long long findTheArrayConcVal(vector<int>& nums) {
        long long int ans = 0;
        int n = nums.size();
        for(int i=0;i<n/2;i++){
            ans+=concatenate(nums[i], nums[n-i-1]);
        }
        if(n%2!=0) ans+=nums[n/2];
        return ans;
    }
};
