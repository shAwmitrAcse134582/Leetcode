class Solution {
public:
    bool isPalindrome(int x) {
        string s="";
         bool ok=true;
        if(x<0){
            return false;
        }
        else{
        while(x){
            int n=x%10;
             x/=10;
             cout<<n<<endl;
            s+=to_string(n);
        }
        string tmp=s;
        reverse(tmp.begin(),tmp.end());
        
            cout<<s<<" "<<tmp<<endl;
       if(s==tmp)return true;
       else return false;
       
        }
   
    }
};