class Solution {
public:
    int maxSubArray(vector<int>& a) 
    {
        long long int n,sum=0,i,max=-9999999999;
        n=a.size();
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum>max)
                max=sum;
            if(sum<0)
                sum=0;
        }
        return max;
    }
};