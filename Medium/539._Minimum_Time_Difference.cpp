class Solution {
public:
    int to_min(string s){
        int hours=stoi(s.substr(0, 2));
        int min=stoi(s.substr(3, 2));
        if(hours==0) hours=24;
        return hours*60+min;
    }
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();
        int count=0;
        int min_diff=INT_MAX;
        vector<int> minutes;
        for(int i=0;i<n;i++) minutes.push_back(to_min(timePoints[i]));
        sort(minutes.begin(), minutes.end());
        for(int i=0;i<n-1;i++){
            int diff=abs(minutes[i]-minutes[i+1]);
            if(diff<min_diff) min_diff=diff;
        }
        min_diff = min(min_diff, (1440-minutes.back()+minutes.front()));
        return min_diff;
    }
};
