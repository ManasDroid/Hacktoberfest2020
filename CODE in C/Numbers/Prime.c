 // OPTIMISED CODE FOR CHECKING PRIME NUMBER USING "SIEVE OF ERATOSTHENES" ALGORITHM
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mp map<ll, ll>
#define um unordered_map<ll, ll>
#define pll pair<ll, ll>
#define st set<ll> 
#define us unordered_set<ll>
#define vt vector<ll>
#define vp vector<pll>
#define fl(i, x, y) for(long i=x;i<y;++i)
#define flr(i, x, y) for(long i=x;i>=y;--i)

bool is_Prime[1000000001];
vector<ll> primes;
void initabc()
{
    ll i,j,k;
                    for(i=0;i<=(1000001);i++) is_Prime[i]=1;
                    
                    is_Prime[0]=is_Prime[1]=0;
        
                    for(i=2;i<=sqrt(1000001);i++)
                    {
                        if(is_Prime[i])
                        {
                            // cout<<"for i:"<<i<<" below will not be prime \n";
                            for(j=i*i;j<=1000001;j+=i)
                            {
                                // cout<<"j:"<<j<<endl;
                                is_Prime[j]=0;
                            }
                        }
                        
                    }
                    for(i=1;i<=1000001;i++)
                    {
                        if(is_Prime[i]) primes.pb(i);
                    }
}
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,k,l,e,n,m,t;
        
        
        // cout<<"Enter the number of testcases :";
        cin>>t;
        
        initabc();
        
        while(t--)
        {
            // cout<<"Enter a positive interger:";
            cin>>n;
            if(n==1)
                cout<<"1 is neither a prime nor composite number \n";
        
            else if(is_Prime[n])
                cout<<n<<" is a PRIME number \n";
            else
                cout<<n<<" is NOT a PRIME number \n";
           
        }
return 0; 
}
