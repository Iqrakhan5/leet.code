class Solution {
public:
    int heightChecker(vector<int>& hi) {
        vector<int>arr=hi;
        sort(arr.begin(),arr.end());
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(hi[i]!=arr[i])
                cnt++;
            
        }
        return cnt;
    }
};