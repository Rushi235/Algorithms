#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

//#pragma GCC optimize('O2') 
#define ll long long 
#define vll vector<ll>
#define vi vector<int>
#define tin tuple<ll,ll,ll>
#define mll map<ll,ll>
#define pi pair<ll,ll>
#define vp vector<pi>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define mt make_tuple
#define all(x) (x).begin(),(x).end()
#define rall(x) x.rbegin(), x.rend()
#define watch(x) cout << (#x) << ' is ' << (x) << endl
#define f(i,x,z) for(ll i=x;i<z;i++)
#define rf(i,x,z) for(ll i=x-1;i>=z;i--)
#define deb(x) cout<<'DEBUG------> '<<x<<endl
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define clr(x) memset(x, 0, sizeof(x)) 
#define fa(i,vect) for(auto i : vect)
#define fr(i,vect) for(VI :: reverse_iterator i = vect.rbegin(); i != vect.rend(); i++)
#define mod 1000000007
// s.insert(0);multiset<int> ms;
//auto it = s.lower_bound(a);
//for (auto me : m) {
//std::vector<ll>::iterator it; 
//it = std::find (v.begin(), v.end(), ser);
//v.erase(v.begin() +n);
# define INF 0x3f3f3f3f 
const int MAX = 1e9 + 7; 
////////////////////////////////////////////////////////////////////////////////////////////

ll power(ll base,ll por)
{
ll res=1;
while(por>1){
if(por%2==1)
{
res*=base;
por--;
}
por/=2;
base*=base;
}
res*=base;
return res;
}
const ll N=200005;
ll tree[2*N],n;
void build(ll arr[])
{
	f(i,0,n)tree[n+i]=arr[i];
	rf(i,n,0)tree[i]=min(tree[i<<1],tree[i<<1 | 1])
	;
}
void updateTreeNode(ll p,ll value)
{
	tree[p+n]=value;
	p=p+n;
	for(int i=p;i>1;i>>=1)
	{
		tree[i>>1]=min(tree[i],tree[i^1]);
	}
}
ll query(int l, int r)
{
	ll res=mod;
	for(l+=n,r+=n;l<r;l>>=1,r>>=1)
	{
		if(l&1)
			res=min(res,tree[l++]);
		if(r&1)
			res=min(res,tree[--r]);
	}
	return res;
}
/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
//   freopen('a.txt', 'r', stdin); freopen('a_out.txt', 'w', stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>n>>t;
	ll v[n];
	f(i,0,n)cin>>v[i];
	build(v);
	// f(i,0,2*n)
	// {
	// 	cout<<tree[i]<<" ";
	// }
	f(i,0,t)
	{
		int a,b,c;
		cin>>c>>a>>b;
		if(c==1)updateTreeNode(a-1,b);
		else cout<<query(a-1,b)<<"\n";
	}
	
   return 0;
}