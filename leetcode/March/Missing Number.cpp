class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        long long int i, l, sum = 0;
        l = nums.size();
        for (i = 0; i < l; i++)
        {
            sum += nums[i];
        }
        l = l * (l + 1) / 2;
        return (l - sum);
    }
};