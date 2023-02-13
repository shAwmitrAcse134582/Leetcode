class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>&v) {
        vector<int>x;
        for(int i=0;i<v.size();i++){
              int c=0;
            for(int j=0;j<v.size();j++){
                if(v[j]<v[i]){
                      c++;
                }
               
            }
            x.push_back(c);
        }
        
       return x; 
    }
   
};