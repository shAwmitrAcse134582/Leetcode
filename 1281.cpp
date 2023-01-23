class Solution {
public:
    int subtractProductAndSum(int n) {
        int a[1000005];
        int sum=0;
        int mul=1;
        string temp=to_string(n);
        for(int i=0;i<temp.size();i++){
            a[i]=n%10;
            n/=10;
            sum+=a[i];
            mul*=a[i];
        }
        return mul-sum;
    }
};