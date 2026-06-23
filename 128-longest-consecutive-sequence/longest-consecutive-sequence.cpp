class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if (n==0)
        {
            return 0;
        }
        int lng=1;

        unordered_set<int> sol;
        for(int i=0;i<n;i++)
        {
            sol.insert(nums[i]);
        }
        for (auto val : sol)
        {
            if(sol.find(val-1)==sol.end())
            {
                int count=1;
                int x=val;
                while(sol.find(x+1)!=sol.end())
                {
                    count++;
                    x++;
                }
                lng=max(count,lng);
            }
        }
        return lng;
    }
};