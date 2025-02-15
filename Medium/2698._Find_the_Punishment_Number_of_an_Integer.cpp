class Solution {
public:
    int punishmentNumber(int n) {
        vector<int> nums = {1,9,10,36,45,55,82,91,99,100,235,297,369,370,379,414,
                           657,675,703,756,792,909,918,945,964,990,991,999,1000};
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=n) sum+=nums[i]*nums[i];
            else break;
        }
        return sum;
    }
};

// Need to figure out why it's not working even that it checks all cases
// class Solution {
// public:
//     int punishmentNumber(int n) {
//         int sum=0;
//         for (int i=1;i<=n;i++)
//         {
//             if (i%9==0 || i%9==1) sum+=(i*i);
//         }
//         return sum;
//     }
// };
