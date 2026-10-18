class Solution {
public:
    int rank(char c) {
        if (c=='I') return 1;
        if (c=='V') return 2;
        if (c=='X') return 3;
        if (c=='L') return 4;
        if (c=='C') return 5;
        if (c=='D') return 6;
        if (c=='M') return 7;
        return 0;
    }

    int value(char c) {
        if (c=='I') return 1;
        if (c=='V') return 5;
        if (c=='X') return 10;
        if (c=='L') return 50;
        if (c=='C') return 100;
        if (c=='D') return 500;
        if (c=='M') return 1000;
        return 0;
    }

    int romanToInt(string s) {
        int len = s.size();
        int cnt=0;

        for (int i=0; i<len; i++) {
            if (i<len-1) {
                if (rank(s[i])>=rank(s[i+1])) cnt+=value(s[i]);
                else cnt-=value(s[i]);
            }
            else cnt+=value(s[i]);
        }

        return cnt;
    }
};