class Solution
{
public:
    string removeOuterParentheses(string S)
    {
        int l = S.length(), o = 0, c = 0;
        string ans = "";
        for (int i = 1; i < l; i++)
        {
            if (S[i] == '(')
                o++;
            else
                c++;
            if (o >= c)
                ans += S[i];
            else
            {
                o = 0, c = 0;
                i++;
            }
        }
        return ans;
    }
};