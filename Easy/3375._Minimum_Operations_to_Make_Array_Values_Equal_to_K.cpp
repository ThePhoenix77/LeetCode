class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> s;
        for(int n : nums){
            if(n<k) return -1;
            else if(n>k) s.insert(n);
        }
        return s.size();
    }
};
