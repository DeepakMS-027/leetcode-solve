class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        // if (n==0)
        // {
            // return 1;
        // }
        int val=1;
        for(int j=n;j>0;j--){
        int x=10-j;
        int ans=1;
        for (int i=9;i>=x+1;i--)
        {
            ans=ans*i;
        }
        ans=ans*9;
        val=val+ans;
        }
        // return x;
        return val;
    }
};