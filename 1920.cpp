class Solution {
public:
    vector<int> buildArray(vector<int>& n) {
        int x=n.size();
        vector<int>a(x);
        for(int i=0;i<x;i++){
          a[i]= n[n[i]];
        }
     return a;
    }
};