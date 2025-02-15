class Solution {
    public:
        int maxCount(vector<int>& v, int n, int s) {
            sort(v.begin(), v.end()); 
            int sum = 0, cnt = 0;
    
            for (int i = 1; i <= n; i++) {
                if (find(v.begin(), v.end(), i) != v.end()) {
                   continue;  
                }  
                else if (sum + i > s) {
                   break;
                }
                else{
                sum += i;
                cnt++;
                }      
            }
    
            return cnt;
        }
    };