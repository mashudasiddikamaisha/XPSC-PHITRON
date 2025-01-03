class Solution {
  public:
    long long maximumSumSubarray(vector<int>& a, int k) {

        int n= a.size(), l=0, r=0;
        long long sum=0, ans=0;

        while(r<n)
        {
          sum+=a[r];
          if(r-l+1==k)
          {
            ans = max(ans, sum);
            sum-=a[l];
            l++, r++;
          }
          else
          {
            r++;
          }
        }
        return ans;
    }
};
