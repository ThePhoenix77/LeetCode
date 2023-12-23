class Solution {
public:
    bool isValid(string s) {
        int balance = 0;
        for (char c : s) {
        if (c == '(') balance++;
        else if (c == ')') {
            balance--;
            if (balance < 0) return false;
        }
    }
    return balance == 0;
}
    vector<string> removeInvalidParentheses(string s) {
        vector<string> result;
        unordered_set<string> visited;
        queue<string> q;
        bool found = false;

        q.push(s);
        visited.insert(s);
        while (!q.empty()) {
            string current = q.front();
            q.pop();
            if (isValid(current)) {
                result.push_back(current);
                found = true;
            }
            if (found) continue;

        for (int i = 0; i < current.size(); i++) {
            if (current[i] == '(' || current[i] == ')') {
                string next = current.substr(0, i) + current.substr(i + 1);
                if (visited.find(next) == visited.end()) {
                    q.push(next);
                    visited.insert(next);
                }
            }
        }
    }
    return result;
}
};
