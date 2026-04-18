class Solution {
public:
    int calculate(string s) {
        long curr = 0, last = 0, result = 0;
        char op = '+';

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (isdigit(c)) {
                curr = curr * 10 + (c - '0');
            }

            if (!isdigit(c) && c != ' ' || i == s.size() - 1) {
                if (op == '+') {
                    result += last;
                    last = curr;
                }
                else if (op == '-') {
                    result += last;
                    last = -curr;
                }
                else if (op == '*') {
                    last = last * curr;
                }
                else if (op == '/') {
                    last = last / curr;
                }

                op = c;
                curr = 0;
            }
        }

        return result + last;
    }
};