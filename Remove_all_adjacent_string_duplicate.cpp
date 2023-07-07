class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string s1="";
        for(auto c:s){
            if(st.empty()){
               
                st.push(c);
            }
            else{
                if(c==st.top()){
                    st.pop();
                }
                else{
                    st.push(c);
                }
            }
        }
        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }
      reverse(s1.begin(),s1.end());
      return s1;
    }
};