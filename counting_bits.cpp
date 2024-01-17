class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        v.push_back(0);
        for(int i=1;i<=n;i++){
             int c=0;
             int tmp=i;
             while(tmp){
               int x=tmp%2;
               tmp/=2;
              if(x==1){
                c++;
             }
        }
        // cout<<c<<endl;
        v.push_back(c);
        }
        return v;
       
    }
};