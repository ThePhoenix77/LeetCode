class Solution {
public:
    int minimumLength(string s) {
        int count = 0;
        vector<int> freq(26, 0);
        for(char c : s) freq[c - 'a']++;
        for(int f : freq){
            if(f == 0) continue;
            if(f % 2 == 0) count += 2;
            else count += 1;
        }
        return count;
    }
};
