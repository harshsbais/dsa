class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int a[102] = {0};
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            a[nums[i]]++;
        }
        for (int i = 0; i < 100; i++)
        {
            ans += a[i] * (a[i] - 1) / 2;
        }
        return ans;
    }
};

//Revised Solution with map

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        unordered_map<int, int> map;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }
        for (auto i : map)
        {
            int x = i.second;
            ans += x * (x - 1) / 2;
        }
        return ans;
    }
};