class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i=0; i<n; i++){
            if (i && nums[i] == nums[i - 1]) continue;
            unordered_set<int> seen;
            for (int j=i+1; j<n; j++){
                int x = -nums[i] - nums[j];
                if (seen.count(x)){
                    ans.push_back({nums[i], x, nums[j]});
                    while (j + 1 < n && nums[j] == nums[j + 1]) j++;
                }
                seen.insert(nums[j]);
            }
        }
        return ans;
    }
};
