class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
   for(int i=n-1;i>=0;i--){
    if(digits[i]<9)
    {
        digits[i]+=1;
        return digits;
    }
    else
    digits[i]=0;
   }

   vector<int>new_arr(n+1,0);
   new_arr[0]=1;
   return new_arr;
    }
};