class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());
        vector<int> slots;
        for(auto f : factory)
            for(int i=0;i<f[1];i++) slots.push_back(f[0]);
        
        int n=robot.size(), m=slots.size();
        vector<vector<long long>> dp(n+1, vector<long long>(m+1, 1e15));
        for(int j=0;j<=m;j++) dp[0][j] = 0;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                dp[i][j] = dp[i][j-1];
                dp[i][j] = min(dp[i][j], dp[i-1][j-1] + abs(robot[i-1] - slots[j-1]));
            }
        }
        return dp[n][m];
    }
};


// greedy approach(not optimal)

/*
class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        long long ans=0;
        for(int i=0;i<robot.size();i++){
            long long cls=abs(robot[i] - factory[0][0]);
            int idx=0;
            for(int j=1;j<factory.size();j++){
                if(factory[j][1] > 0){
                    long long dis=abs(robot[i] - factory[j][0]);
                    if(dis < cls){
                        cls=dis;
                        idx=j;
                    }
                }
            }
            factory[idx][1]--;
            ans+=cls;
        }
        return ans;
    }
};
*/
