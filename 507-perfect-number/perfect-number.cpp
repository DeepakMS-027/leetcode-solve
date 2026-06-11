class Solution {
public:
    bool checkPerfectNumber(int num) {
         int sum=0;
         int n=num;

    for (int i = 1; i<= n/2; i++) {
        if (n % i == 0) {
            if (i != n)
                sum+=i;
        }
    }
    if (sum==n)
    {
      return 1;
    }
    else{
      return 0;
    }
    return -1;
    }
};