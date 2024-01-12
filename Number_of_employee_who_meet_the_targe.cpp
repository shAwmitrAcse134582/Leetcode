class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& v, int t) {
        int n=v.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(v[i]>=t){
                cnt++;
            }
        }
        return cnt;
    }
};