class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        long long int l = nums.size(), i, sum = 0;
        vector<int> a;
        unordered_set<int> set;
        for (i = 0; i < l; i++)
        {
            if (set.find(nums[i]) == set.end())
            {
                set.insert(nums[i]);
                sum += nums[i];
            }
            else
                a.push_back(nums[i]);
        }
        l = l * (l + 1) / 2;
        a.push_back(l - sum);
        return a;
    }
};