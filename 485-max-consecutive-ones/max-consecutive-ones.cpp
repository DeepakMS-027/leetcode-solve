class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size=nums.size();
        int count=0;
        int max=0;
        for(int i=0 ;i<size;i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else
            {
                if(max<count)
                {
                    max=count;
                }
                count=0;
            }
        }
        if(max<count)
        {
            max=count;
        }
        return max;
    }
};