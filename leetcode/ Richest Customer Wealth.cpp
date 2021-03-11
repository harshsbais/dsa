class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int ans = -9999, sum;
        for (int i = 0; i < accounts.size(); i++)
        {
            sum = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                sum += accounts[i][j];
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};