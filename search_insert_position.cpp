class Solution {
    public:
        int searchInsert(vector<int>& v, int t) {
            int l = 0, r = v.size() - 1;
    
            while (l <= r) {
                int mid = l + (r - l) / 2;  
                if (v[mid] == t) {
                    return mid;  
                }
                else if (v[mid] > t) {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            return l;  
        }
    };