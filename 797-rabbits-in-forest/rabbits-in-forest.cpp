class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> freq;
        int x = 0;

        for(int num : answers)
        {
            freq[num]++;
        }

        for(auto val : freq)
        {
            int groupSize = val.first + 1;
            int count = val.second;

            int groups = (count + groupSize - 1) / groupSize; 

            x += groups * groupSize;
        }

        return x;
    }
};