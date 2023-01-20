class Solution {
public:
    string defangIPaddr(string s) {
         string str="";
         for(int i=0;i<s.size();i++)
         {
             if(s[i]=='.')
             str+="[.]";
             else
             str+=s[i];
         }
         return str;
    }
};