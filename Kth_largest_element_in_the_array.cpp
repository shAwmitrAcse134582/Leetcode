#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
int n;
cin>>n;
int k;
cin>>k;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
            queue<int>q;
        for(auto val:v){
            if(q.empty()){
                q.push(val);
            }
            else{
                if(val<q.front()){
                    int y=q.front();
                    q.pop();
                    q.push(val);
                    q.push(y);
                }
                else{
                    q.push(val);
                }
            }
        }
        int x=q.size()-k;
        while(x--){
            q.pop();
        }
        cout<<q.front()<<endl;
get_out;
}