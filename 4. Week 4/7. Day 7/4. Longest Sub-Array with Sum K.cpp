class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& a, int k) {
        // code here
        int n = a.size(),ans = 0;
        long long sum = 0;
        map<long long, int> mp;
        int r=0;
        while(r<n)
        {
            sum += a[r];
            if (sum==k)
            {
                ans = max(ans, r+1);
            }
            if (mp.find(sum)==mp.end())
            {
                mp[sum] =r;
            }
            if (mp.find(sum-k) != mp.end())
            {
                ans = max(ans, r-mp[sum-k]);
            }
            r++;
        }
        return ans;
    }
};
