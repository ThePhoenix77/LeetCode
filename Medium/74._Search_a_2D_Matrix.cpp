class Solution {
public:
    int binarySearch(vector<int> vec, int target) {
    int low = 0, high = vec.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (vec[mid] == target) return mid;
        else if (vec[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans=false;
        int n=matrix.size();
        for(int i=0;i<n;i++){
            int tmp=binarySearch(matrix[i], target);
            if(tmp!=-1) {ans=true;break;}
        }
        return ans;
    }
};
