class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
       int n=arr.size();
       int ans=0;
       int tmp=arr[0];
       for(int i=0;i<n;i++){
        tmp=max(tmp, arr[i]);
        if(tmp==i) ans++;
       }
       return ans;
    }
};
