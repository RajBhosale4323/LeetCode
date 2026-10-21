#include <climits>

class Solution {
public:
    int myAtoi(string s) {
        long long len = s.size();
        int i = 0;
        long long ans = 0;
        int sign = 1;

        while (i < len && s[i] == ' ')
            i++;

        if (i < len && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        while (i < len && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            // Check overflow before multiplying
            if (ans > (LLONG_MAX - digit) / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + digit;

            if (sign == 1 && ans > INT_MAX)
                return INT_MAX;
            if (sign == -1 && ans > 2147483648LL)
                return INT_MIN;

            i++;
        }

        return static_cast<int>(ans * sign);
    }
};