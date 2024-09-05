class Solution {
public:
    bool isHappy(int n) {
       int sum=n;
        while(sum!=1 && sum!=4)
        {
            int digit=+sum;
            sum=0;
            while(digit!=0)
            {
                int digit1=digit%10;
                sum+=digit1*digit1;
                digit=digit/10;
            }
        }
        return sum==1;
    }
};