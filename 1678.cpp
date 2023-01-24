class Solution {
public:
    string interpret(string str) {
        string s="";
        // string s1="()";
        // string s2="(al)";
        for(int i=0;i<str.size();i++){
            if(str[i]=='G')
            {
                s+='G';
            }
          else if(str[i]=='(' && str[i+1]==')'){
                s+='o';
            }
           else if(str[i]=='(' && str[i+1]=='a' && str[i+2]=='l' && str[i+3]==')'){
                s+="al";
            }
        }
        return s;
    }
};