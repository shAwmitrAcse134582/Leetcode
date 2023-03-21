class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        int x=t1.length();
        int y=t2.length();
        int a[x+1][y+1];
        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                a[i][j]=-1;
            }
        }
        for(int i=0;i<x;i++){
            a[i][0]=0;

        }
        for(int j=0;j<y;j++){
            a[0][j]=0;
        }
        
        if(x==1&& y==1){
            if(t1==t2)
            return 1;
            else
            return 0;
        }
        else{
             for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(t1[i-1]==t2[j-1]){
                    a[i][j]=a[i-1][j-1]+1;
                }
                else{
                    a[i][j]=max(a[i-1][j],a[i][j-1]);
                }
            }
        }
        return a[x][y];
        }
      
    }
};