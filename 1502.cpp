class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>&v) {
        sort(v.begin(),v.end());
        int x=v[1]-v[0];
        for(int i=2;i<v.size();i++){
            if(v[i]-v[i-1]!=x){
                return false;
                break;
            }
        }
        return true;
    }
};