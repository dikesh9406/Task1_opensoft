#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int mul(int a, int b)
{
    
    return ((a%mod)*(b%mod))%mod;
}

int mod_inverse(int a, int m=mod)
{
    return binpow(a, m-2);
}
const int sz=2e5+1;
int fact[sz], invfact[sz];
void precompute(){
    fact[0]=invfact[0]=1;
    for(int i=1;i<sz;i++)
    {
        fact[i]=mul(fact[i-1], i);
        invfact[i]=mul(invfact[i-1], mod_inverse(i));
    }
}

void solve()
{
    int n;
    cin>>n;
    string a, b;
    cin>>a>>b;
    int  count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            count++;
        }
    }
    if((n-count)%2)
    {
        cout<<0<<endl;
        return;
    }
    n-=count;
    int ans=binpow(2,count);
    ans=mul(ans, mul(fact[n], mul(invfact[n/2], invfact[n/2])));
    cout<<ans<<endl;
    
}

int main() {
    int tra;
    cin>>tra;
    while(tra--)
    {
        solev();
        
    }
	// your code goes here
	return 0;
}
