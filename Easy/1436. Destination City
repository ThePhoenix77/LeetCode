class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> pathCities;
        for (const auto& path : paths) {
            pathCities.insert(path[0]);
        }
        for (const auto& path : paths) {
            if (pathCities.find(path[1])==pathCities.end()) {
                return path[1];
            }
        }
        return "";
    }
};
