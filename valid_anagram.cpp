class Solution {
public:
    bool isAnagram(string s, string t) {
        // set<char>st1,st2;
        // for(int i=0;i<s.size();i++){
        //     st1.insert(s[i]);
        // }

        //  for(int i=0;i<t.size();i++){
        //     st2.insert(t[i]);
        // }
        // string a="",b="";
        // for(auto it : st1){
        //       a+=it;
        // }
        //  for(auto it : st2){
        //       b+=it;
        // }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t)return true;
        else return false;

    }
};