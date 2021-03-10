class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        long long int i, total, l = candyType.size() / 2, min;
        unordered_set<int> set;
        for (i = 0; i < candyType.size(); i++)
        {
            if (set.find(candyType[i]) == set.end())
            {
                set.insert(candyType[i]);
            }
        }
        total = set.size();
        min = (total < l) ? total : l;
        return min;
    }
};