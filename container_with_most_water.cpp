class Solution {
public:
    int maxArea(vector<int>&v) {
        int n=v.size();
        int area=0;

        //O(n^2) solution
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int mn=min(v[i],v[j]);
        //         int x=mn*(j-i);
        //         if(area<x){
        //             area=x;
        //         }
        //     }
        // }
        int l=0,r=n-1;
        while(l<r){
            int mn=min(v[l],v[r]);
            int x=mn*(r-l);
            if(area<x){
                area=x;
            }
            if(v[l]>=v[r]){
                r--;
            }
            else{
                l++;
            }
        }

        return area;
        
    }
};