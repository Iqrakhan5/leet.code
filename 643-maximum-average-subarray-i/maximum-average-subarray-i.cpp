class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
      
      
        for(int i=0;i<k;i++){
            sum+=nums[i];}
            double avg=sum/k;
   
        for(int i=k;i<nums.size();i++){
            sum+=nums[i]-nums[i-k];
           double  max_avg=sum/k;
              avg=max(max_avg,avg);
        }
        return avg;
    }
};