class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1 ;
        for(int i = n-2 ; i>=0 ; i--)
        {
            if(nums[i]<nums[i+1])
            {
                pivot = i;
                break;
            }
        }
        if(pivot == -1 )
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        else
        {
            reverse(nums.begin()+pivot+1 , nums.end());
            int j = -1;
            for(int i = pivot+1 ; i<n ; i++)
            {
                if(nums[i]>nums[pivot])
                {
                    j = i;
                    break;
                }
            }
            int temp = nums[pivot];
            nums[pivot] = nums[j];
            nums[j] = temp;
            return;
        }
    }
};