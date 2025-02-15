class Solution {
    public:
        int countPairs(vector<int>& v, int t) {
            sort(v.begin(),v.end());
            int cnt=0;
            int n=v.size();
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                   if(v[i]+v[j]<t){
                    cnt++;
                   }
                }
            }
            return cnt;
        }
    };