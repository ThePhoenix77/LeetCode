class Solution {
public:
    void dfs(string from, map<string, multiset<string>> &flights, vector<string> &path){
        while(!flights[from].empty()){
            auto dests=flights[from].begin();
            string next=*dests;
            flights[from].erase(dests);
            dfs(next, flights, path);
        }
        path.push_back(from);
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        map<string, multiset<string>> flights;
        vector<string> path;
        for(auto &ticket : tickets)
            flights[ticket[0]].insert(ticket[1]);
        dfs("JFK", flights, path);
        reverse(path.begin(), path.end());
        return path;
    }
};
