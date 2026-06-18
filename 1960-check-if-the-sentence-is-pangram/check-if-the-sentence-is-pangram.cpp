class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26]={0};
        
        for(char c:sentence)
        {
            arr[c-'a']++;
        } 
        int i;
        for (i=0;i<26;i++)
        {
            if (arr[i]==0)
            {
                break;
            }
        }

        if(i<26)
        {
            return false;
        }
        return true;
    }
};