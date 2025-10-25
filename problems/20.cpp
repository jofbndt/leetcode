class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        for (char c : s) {
            if (c == '(') {
                x.push(')');
            } else if (c == '[') {
                x.push(']');
            } else if (c == '{') {
                x.push('}');
            } else if (!x.empty() && x.top() == c) {
                x.pop();
            } else {
                return false;
            }
        }
        if (!x.empty()) {
            return false;
        }
        return true;
    }
};
