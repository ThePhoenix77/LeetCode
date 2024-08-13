class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i = 0;
        int j = 0;
    string cat1 = "";
    string cat2 = "";
    while(i<word1.size()) {
        cat1 += word1[i];
        i++;
    }
    while(j<word2.size()) {
        cat2 += word2[j];
        j++;
    }
    return (cat1 == cat2);
    }
};
