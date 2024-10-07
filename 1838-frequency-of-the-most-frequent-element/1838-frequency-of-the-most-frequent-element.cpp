class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int result = 1;
        long long total = 0;
        for(int right  = 0 ; right < nums.size() ; right++)
        {
            total = total + nums[right];

            while((long long)nums[right]*(right-left+1)>total+k)
            {
                total = total - nums[left];
                left++;
            }
            result = max(result, right-left+1);
        }
        return result;
    }
};