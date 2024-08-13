class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> uniqueSet;
        for (int num : nums){
            if (!uniqueSet.insert(num).second) uniqueSet.erase(num);
        }
        return *uniqueSet.begin();
    }
};

////////////////////////////////////////////////////////////////////

/*Other Approach:*/
/*Using the XOR operator.*/
/*
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
}*/
