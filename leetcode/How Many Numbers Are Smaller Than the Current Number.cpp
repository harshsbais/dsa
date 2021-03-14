class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> ans;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int k = 0; k < nums.size(); k++)
            {
                if (nums[i] > nums[k] && i != k)
                {
                    cnt++;
                }
            }
            ans.push_back(cnt);
            cnt = 0;
        }
        return ans;
    }
};

//Revised Solution

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> ans(nums.size());
        int list[101] = {0};
        int cnt = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            list[nums[i]]++;
        }
        for (int i = 1; i < 101; i++)
        {
            list[i] += list[i - 1];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                ans[i] = 0;
            else
                ans[i] = (list[nums[i] - 1]);
        }
        return ans;
    }
};
