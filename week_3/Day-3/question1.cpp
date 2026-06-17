class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(ch);
            } else {
                if (!stk.empty()) {
                    char top = stk.top();

                    if ((top == '(' && ch == ')') ||
                        (top == '{' && ch == '}') ||
                        (top == '[' && ch == ']')) {
                        stk.pop();
                    } else {
                        return false;
                    }

                } else {
                    return false;
                }
            }
        }
        if (stk.empty()) {
            return true;
        }
        return false;
    }
};