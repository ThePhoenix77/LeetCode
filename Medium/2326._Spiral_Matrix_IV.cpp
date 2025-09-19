/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int llSize(ListNode* head, vector<int> &nums){
        int s=0;
        ListNode* curr = head;
        while(curr){
            nums.push_back(curr->val);
            s++;
            curr=curr->next;
        }
        return s;
    }
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1));
        vector<int> nums;
        int b=(m*n) - llSize(head, nums);
        for(int i=0;i<b;i++) nums.push_back(-1);
        int top = 0, right = n - 1;
        int bottom = m - 1, left = 0;
        int idx = 0;
        while(top <= bottom && left <= right){
            for (int j = left; j <= right && idx < nums.size(); j++)
                ans[top][j] = nums[idx++];
            top++;
            for (int i = top; i <= bottom && idx < nums.size(); i++)
                ans[i][right] = nums[idx++];
            right--;

            for (int j = right; j >= left && idx < nums.size(); j--)
                ans[bottom][j] = nums[idx++];
            bottom--;

            for (int i = bottom; i >= top && idx < nums.size(); i--)
                ans[i][left] = nums[idx++];
            left++;
        }

        return ans;
    }
};
