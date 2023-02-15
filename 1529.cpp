class Solution {
public:
    string restoreString(string s, vector<int>& v) {
        string str=s;
        for(int i=0;i<v.size();i++){
            str[v[i]]=s[i];
           
        }
         return str;
    }
};