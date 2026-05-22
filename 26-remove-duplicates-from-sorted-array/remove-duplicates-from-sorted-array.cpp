class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         if(nums.size() == 0)
            return 0;

        vector<int> ans;
        int size=nums.size();
        ans.push_back(nums[0]);
        for(int i =1;i<size;i++)
        {
            if(nums[i]!=ans.back())
            {
                ans.push_back(nums[i]);
            }
        }
        nums=ans;

        return ans.size();
    }
};