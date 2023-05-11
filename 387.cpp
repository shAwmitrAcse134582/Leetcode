class Solution {
public:
    int firstUniqChar(string s) {
        int indx=0;
     map<char,pair<int,int> >mp;
        for(auto x:s){
            cout << x << endl;
            mp[x].second++;
             mp[x].first=indx;
             indx++;
        }
       
        int mn=INT_MAX;
        int ok=0;
       for(auto v:mp){
           
             if(v.second.second == 1){
                if(v.second.first<=mn) {
                    ok=1;
                    mn=v.second.first;
                }
        }
        
    }
    if(ok==1){
       return mn; 
    }
    else{
        return -1;
    }
    

    }
};