class Solution {
public:
    int maxNumberOfBalloons(string text) {

        int n=text.size();
        int arr[]={0,0,0,0,0};
        for (int i=0;i<n;i++)
        {
            if(text[i]=='b')
            {
                arr[0]++;
            }
            if(text[i]=='a')
            {
                arr[1]++;
            }
            if(text[i]=='n')
            {
                arr[2]++;
            }
            if(text[i]=='l')
            {
                arr[3]++;
            }
            if(text[i]=='o')
            {
                arr[4]++;
            }
        }
        arr[3]=arr[3]/2;
        arr[4]=arr[4]/2;
        int ans=INT_MAX;
        for(int i=0;i<5;i++)
        {
            if (ans>arr[i])
            {
                ans=arr[i];
            }
        }
        return ans;
    }
};