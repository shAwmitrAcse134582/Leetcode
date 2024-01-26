class Solution {
public:
#define ll  long long int
 vector<ll> primeFactors(int n)
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
    bool isUgly(int n) {
        if (n <= 0) return false; 
        if (n == 1) return true;  
        vector<ll> prime_factors = primeFactors(n);
        for (ll factor : prime_factors) {
            if (factor != 2 && factor != 3 && factor != 5) {
                return false;
            }
        }
        return true;
    }
};