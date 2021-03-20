class Solution
{
public:
    int maxDepth(string s)
    {
        int l = s.length();
        int cnt = 0, max = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '(')
                cnt++;
            if (s[i] == ')')
                cnt--;
            if (cnt > max)
                max = cnt;
        }
        return max;
    }
};