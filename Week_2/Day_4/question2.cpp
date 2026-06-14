class Solution {
public:
    string decodeString(string s) {

        while (s.find('[') != string::npos) {

            int close = s.find(']');

            int open = close;
            while (open >= 0 && s[open] != '[') {
                open--;
            }

            int numStart = open - 1;
            while (numStart >= 0 && isdigit(s[numStart])) {
                numStart--;
            }

            int k = stoi(s.substr(numStart + 1, open - numStart - 1));

            string part = s.substr(open + 1, close - open - 1);

            string expanded = "";
            for (int i = 0; i < k; i++) {
                expanded += part;
            }

            s = s.substr(0, numStart + 1) + expanded + s.substr(close + 1);
        }

        return s;
    }
};