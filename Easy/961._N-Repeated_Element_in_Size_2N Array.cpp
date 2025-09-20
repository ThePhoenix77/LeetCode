class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i++)
            if(nums[i]==nums[i+1]) return nums[i];
        return -1;
    }
};

//tricky but right solution(as while we iterate 
//we will definetly find the match of the "n" 
//repeated number or the edge case which is the number 
//being in the first and last index of the nums vector) whick is a brilliant approach
/*
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        for (auto i = 0; i < A.size() - 2; ++i)
            if (A[i] == A[i + 1] || A[i] == A[i + 2]) return A[i];
        return A[A.size() - 1]; 
        }
};
*/
