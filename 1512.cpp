//*solution in o(n^2);
class Solution {
public:
    int numIdenticalPairs(vector<int>& v) {
        int cnt=0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++){
                if(v[i]==v[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

//*solution in o(n);

class Solution {
public:
    int numIdenticalPairs(vector<int>& v) {
        int cnt=0;
        map<int,int>mp;
        for(int i=0;i<v.size();i++)
        {
            cnt+=mp[v[i]]++;
        }
        return cnt;
    }
};