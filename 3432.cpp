class Solution {
    public:
        int countPartitions(vector<int>& v) {
            int n=v.size();
            int sum=accumulate(v.begin(),v.end(),0);
            vector<int>pre(n);
            pre[0]=v[0];
            for(int i=1;i<n;i++){
                pre[i] = v[i] + pre[i-1];
            }
            int cnt=0;
            for(int i=0;i<n-1;i++){
                int dif=sum - pre[i];
                if(pre[i]%2 == dif%2){
                    cnt++;
                }
            }
           
            return cnt;
    
        }
    };