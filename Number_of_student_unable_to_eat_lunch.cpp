class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q,st;
   
        for(auto s:students){
            q.push(s);
        }
        for(auto sn:sandwiches){
            st.push(sn);
        }
        int r=0,e=0;
        int n=q.size();
        while(!st.empty() && !q.empty() && r<n){
            if(st.front()==q.front()){
                st.pop();
                q.pop();
                e++;
                r=0;
            }
            else{
                int x=q.front();
                q.pop();
                q.push(x);
                r++;
            }
        }
     return q.size();

    }
};