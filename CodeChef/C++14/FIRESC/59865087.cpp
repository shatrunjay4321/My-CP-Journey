#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll M = 7 + 1e9;
void dfs(vector<ll>& vis, vector<vector<ll>>& adj, ll i, ll& num)
{
    vis[i] = 1;
    num++;
    for(auto x:adj[i])
    {
        if(vis[x]==0)
        {
            dfs(vis, adj, x, num);
        }
    }
}
void solve()
{
    ll n, m, i, j, k;
    cin>>n>>m;
    vector<ll> vis(n+1, 0);
    vector<vector<ll>> adj(n+1);
    for(k=0; k<m; k++)
    {
        cin>>i>>j;
        adj[i].push_back(j);
        adj[j].push_back(i);
    }
    ll cc = 0, prod = 1, num;
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            num = 0;
            cc++;
            dfs(vis, adj, i, num);
            prod*=num;
            prod%=M;
        }
    }
    cout<<cc<<" "<<prod<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
