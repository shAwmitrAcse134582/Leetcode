class Solution {
public:
    int guessNumber(int n) {
         int l=1;
        int r=n;
       
        while(l<=r){
            int m=l+(r-l)/2;
            int ans=guessNumber(m);
            if(ans==0){
                return m;
            }
            else if(ans==-1){
               r=m-1;

            }
            else{
                l=m+1;
            }
        }
        return -1;
    }
};