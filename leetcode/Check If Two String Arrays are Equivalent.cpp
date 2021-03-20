class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        int l1 = word1.size(), l2 = word2.size(), l3;
        for (int i = 1; i < l1; i++)
        {
            word1[0] += word1[i];
        }
        for (int i = 1; i < l2; i++)
        {
            word2[0] += word2[i];
        }
        if (word1[0] == word2[0])
            return true;
        return false;
    }
};