#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

//#pragma GCC optimize('O2') 
#define ll long long 
#define vll vector<ll>
#define vl vector<int>
#define tin tuple<ll,ll,ll>
#define mll map<ll,ll>
#define pi pair<ll,ll>
#define vp vector<pi>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
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
//  for (auto &a : v)
//cin >> a;
//for (auto me : m) {
//std::vector<ll>::iterator it; 
//it = std::find (v.begin(), v.end(), ser);
//if (it != v.end())
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
///////////////////////////////////////////////////////////////
class Graph {
    ll V; // No. of vertices

    list<ll>* adj;

    void DFSUtil(ll v, bool visited[]);
 
public:
    Graph(ll V); 

    void addEdge(ll v, ll w);

    void DFS(ll v);
};
 
Graph::Graph(ll V)
{
    this->V = V;
    adj = new list<ll>[V];
}
 
void Graph::addEdge(ll v, ll w)
{
    adj[v].pb(w);
    adj[w].pb(v); 
}
void Graph::DFSUtil(ll v, bool visited[])
{
    visited[v] = true;
    cout << v << " ";

    
    for (auto i : adj[v])
        if (!visited[i])
            DFSUtil(i, visited);
}

void Graph::DFS(ll v)
{

    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    DFSUtil(v, visited);
}

int main()
{
//   freopen('a.txt', 'r', stdin); freopen('a_out.txt', 'w', stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,n;
    cin>>t;
    ll a,co=0,c=0,d=0,b;
    Graph g(t);
    f(i,0,t)
    {
        cin>>a>>b;
        g.addEdge( a, b);
    }
    g.DFS( 0); 
    
   return 0;
}