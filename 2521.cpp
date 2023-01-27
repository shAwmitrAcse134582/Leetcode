class Solution {
public:
    int countDigits(int num) {
    int c=0;     
    int temp=num;
    int val=temp;
    string s=to_string(num);
      int x=s.size();
      int a[x];
        for(int i=0;i<x;i++){
            a[i]=temp%10;
             temp/=10;
             if(val%a[i]==0)
            {
                c++;
            }
           
           
           
        }
    return c;
    }
};