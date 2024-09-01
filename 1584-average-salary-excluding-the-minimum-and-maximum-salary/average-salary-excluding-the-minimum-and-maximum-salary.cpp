class Solution {
public:
    double average(vector<int>& salary) {
       sort(salary.begin(),salary.end());
          double sum=0;
       if(salary.size()<3) {
        return -1;
       }else{
     int n=salary.size();
        for (int i = 1; i <n  - 1; ++i) {
            sum += salary[i];
       }
      
    }
     return sum/(salary.size()-2);
    }
};