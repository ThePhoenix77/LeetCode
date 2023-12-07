class Solution {
public:
    int trap(vector<int>& height) {
int ans = 0, n = height.size();
        vector<int> dp1(n), dp2(n);
        
        dp1[0] = height[0];
        for (int i = 1; i < n; i++) dp1[i] = max(dp1[i - 1], height[i]);
        dp2[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) dp2[i] = max(dp2[i + 1], height[i]);
        for (int i = 1; i < n - 1; i++) ans += min(dp1[i], dp2[i]) - height[i];
        return ans;
    }
};
