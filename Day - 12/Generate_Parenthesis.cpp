class Solution {
public:
    void generating(int n, int open, int closed, vector<string> &ans, string &temp) {
        // Base case: If we have used all open and closed parentheses
        if (open == n && closed == n) {
            ans.push_back(temp);
            return;
        }

        // If we can still add an open parenthesis
        if (open < n) { 
            temp.push_back('(');
            generating(n, open + 1, closed, ans, temp);
            temp.pop_back(); // Backtrack to explore other possibilities
        }

        // If we can still add a closing parenthesis without breaking the balance
        if (closed < open) {
            temp.push_back(')');
            generating(n, open, closed + 1, ans, temp);
            temp.pop_back(); // Backtrack to explore other possibilities
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        generating(n, 0, 0, ans, temp); // Start with 0 open and 0 closed parentheses
        return ans;
    }
};
