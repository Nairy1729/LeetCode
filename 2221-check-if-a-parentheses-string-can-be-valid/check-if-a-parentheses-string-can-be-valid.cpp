class Solution {
public:
    bool canBeValid(string s, string locked) {
        if (s.length() % 2 != 0) {
            return false;
        }

        int open_balance = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(' || locked[i] == '0') { 
                open_balance++;
            } else {
                open_balance--;
            }

            if (open_balance < 0) {
                return false;
            }
        }

        int close_balance = 0; 
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] == ')' || locked[i] == '0') { 
                close_balance++;
            } else { 
                close_balance--;
            }

            if (close_balance < 0) {
                return false;
            }
        }

        return true;
    }
};
