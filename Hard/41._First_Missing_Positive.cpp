class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<bool> present(n+1, false);
        for(int num : nums) {
            if(num>0 && num<=n) present[num]=true;
        }
        for(int i=1; i<=n; ++i) {
            if(!present[i]) return i;
        }
        return n + 1;
    }
};
