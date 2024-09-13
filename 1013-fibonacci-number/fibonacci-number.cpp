class Solution {
public:
    int fib(int n) {
       if(n<=1)
       {
        return n;
       } 
       int first=0,sec=1;
       for(int i=2;i<=n;++i){

        int nxt_num=first+sec;

        first=sec;
        sec=nxt_num;
       }
       return sec;
    }
};