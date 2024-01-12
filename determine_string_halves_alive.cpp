class Solution {
public:
bool isvowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i'||ch=='o' ||ch=='u'){
        return true;
    }
    else return false;
}
    bool halvesAreAlike(string s) {
       int n=s.size();
       for(int i=0;i<n;i++){
           s[i]=tolower(s[i]);
       }
       int fst=0,scnd=0;
       for(int i=0;i<n/2;i++){
             if(isvowel(s[i])){
                 fst++;
             }
       }
       for(int i=n/2;i<n;i++){
             if(isvowel(s[i])){
                 scnd++;
             }
       }
       if(fst==scnd)return true;
       else return false;

    }
};