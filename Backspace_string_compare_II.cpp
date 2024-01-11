#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl '\n'
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;

bool isPalindrom(string x)
{
    int i = 0;
    int j = x.size() -1;
    while(i < j)
    {
        if(x[i] != x[j]) return false;
        i++;
        j--;
    }
    return true;
}
bool isEven(ll n)
{
    return n % 2 == 0;
}
bool isOdd(ll n)
{
    return n % 2 != 0;
}
bool isPrime(int n)
{
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0) return false;
    }
    return true;
}
ll gcd(ll a, ll b)
{
    if(a < b) swap(a, b);
    ll ans;
    int rem = 1;
    while(true)
    {
        rem = a % b;
        if(rem == 0) 
        {
            ans = b;
            break;
        }
        a = b;
        b = rem;
    }
    return ans;
}
vector<ll> primeFactors(ll n)
{
    vector<ll> factors;
    for(ll i = 2; i * i <= n; i++)
    {
        ll cnt = 0;
        while(n % i == 0)
        {
            cnt++;
            n /= i;
            factors.push_back(i);
        }
    }
    if(n > 1) factors.push_back(n);
    return factors;
}
ll digitSum(ll n)
{
    ll sum = 0;
       string num = to_string(n);
       for(int i = 0; i < num.size(); i++)
       {
           sum += (num[i] - '0');
    }
    return sum;
}
int main()
{
fast;
string s,t;
cin>>s>>t;
int n1=s.size();
int n2=t.size();
        stack<char>st1,st2;
        // st1.push(s[0]);
        // st2.push(t[0]);
        for(int i=0;i<n1;i++){
            if(s[i]!='#'){
                st1.push(s[i]);
            }
           else if(s[i]=='#' && !st1.empty()){
               st1.pop();
           }
        }
        for(int i=0;i<n2;i++){
            if(t[i]!='#'){
                st2.push(t[i]);
            }
           else if(t[i]=='#' && !st2.empty()){
               st2.pop();
           }
        }
        string a="";
        string b="";
        while(!st1.empty()){
            a+=st1.top();
            st1.pop();
        }
         while(!st2.empty()){
            b+=st2.top();
            st2.pop();
        }
            cout<<a<<endl;
            cout<<b<<endl;
get_out;
}