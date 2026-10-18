class Solution {
public:
    string removeOuterParentheses(string s) {
        int len = s.size();
        string ans = "";
        ans.reserve(s.size());
        int cnt = 0;

        for (int i=0;i<len;i++) {
            if (cnt>0) {
                if (s[i]=='(') cnt+=1;
                else cnt-=1;
                if (cnt>0) ans+=s[i];
            }
            else if (s[i]=='(') {
                cnt+=1;
            }
        }
        return ans;
    }
};