class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
       
        if(nums.size()==2||nums.size()==1||nums.size()==0){
            return -1;

        }
         sort(nums.begin(),nums.end());
        return nums[1];
    }
};