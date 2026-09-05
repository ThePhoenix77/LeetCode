class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) return 1;
        int p = 1, c = 1;
        for (int i = 1; i < n; i++){
            int tmp = c;
            c = p + c;
            p = tmp;
        }
        return c;
    }
};
