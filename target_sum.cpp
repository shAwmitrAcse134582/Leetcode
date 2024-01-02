class Solution {
public:
    vector<int> twoSum(vector<int>& v, int k) {
        vector<int>v2;
        int n=v.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int x=v[i]+v[j];
                if(x==k){
                    v2.push_back(i);
                    v2.push_back(j);
                    
                }
            }
        }
        return v2;
    }
};