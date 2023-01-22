class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n==1){
            return 2;
        }
        else{
           for(int i=1;i<=n;i++){
            n*=i;
            if(n%2==0){
              break;
            }
               
        }
        return n;

        }
       
    }
};