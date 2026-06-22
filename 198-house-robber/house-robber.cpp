class Solution {
public:
    int rob(vector<int>& nums) {
        int incl = 0; // rob current house
        int exc = 0;  // don't rob current house

        for (int i = 0; i < nums.size(); i++) {
            int newIncl = exc + nums[i];
            int newExc = max(incl, exc);

            incl = newIncl;
            exc = newExc;
        }

        return max(incl, exc);
    }
};