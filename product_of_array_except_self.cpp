class Solution {
public:
    vector<int> productExceptSelf(vector<int>&v) {
        int n=v.size();
        vector<int>vec(n,1);
        int l=v[0],r=v[n-1];
        for(int i=1;i<n;i++){
            vec[i]*=l;
            l*=v[i];
        }
        for(int i=n-2;i>=0;i--){
            vec[i]*=r;
            r*=v[i];
        }
        return vec;

    }
};