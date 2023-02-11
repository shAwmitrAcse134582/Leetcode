class Solution {
public:
    int xorOperation(int n, int x) {
        int ans=x;
        for(int i=1;i<n;i++){
            ans=ans^(x+2*i);
        }
        return ans;
    }
};