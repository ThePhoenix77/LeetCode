class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int> tmp=heights;
        sort(heights.begin(), heights.end());
        for(int i=0;i<tmp.size();i++){
            if(tmp[i]!=heights[i]) count++;
        }
        return count;
    }
};
