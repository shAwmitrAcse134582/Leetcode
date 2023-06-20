class NumArray {
public:
   vector<int>v;
    NumArray(vector<int>& n) {
        int x=n[0];
        v.push_back(x);
        for(int i=1;i<n.size();i++){
            x=n[i]+v[i-1];
            v.push_back(x);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
        return v[right];
        else{
          return v[right]-v[left-1];
        }
    }
};