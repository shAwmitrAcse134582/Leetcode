class Solution {
public:
    int findLUSlength(string a, string b) {
        int n=a.size();
        int m=b.size();
        int cnt=0,c=0;
        int mx=-1;
        // for(int i=0;i<n;i++){
        //     if(a[i]!=b[i]){
        //         cnt++;
        //     }
        //     else {
        //         cnt=0;
        //     }
        //     mx=max(cnt,mx);
        // }

        if(n==m){
            for(int i=0;i<n;i++){
                if(a[i]==b[i]){
                    c++;
                }
            }
        }
        if(c==n)return -1;
        else return max(n,m);
        // if(mx==0){
        //     return -1;
        // }
        // else{
        //     return mx;
        // }
    }
};