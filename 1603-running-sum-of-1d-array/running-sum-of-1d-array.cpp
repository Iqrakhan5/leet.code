class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int pre=0;
       for(int i=0;i<nums.size();i++)
       {
   pre = pre + nums[i];
   nums[i]=pre;
       } 
       return  nums;
    }
};