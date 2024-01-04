#include<bits/stdc++.h>
using namespace std;
class DSU 
{
    vector<int> par , size;
    public:
    DSU(int n)
    {
        par.resize(n+1 , 0);
        size.resize(n+1 , 0);
        for(int i=0;i<=n;i++)
        {
            par[i] = i;
            size[i] = 1;
        }
    }
    int find(int a)
    {
        if(a == par[a]) return a;
        else            return par[a] = find(par[a]);
    }
    bool merge(int a , int b)
    {
        a = find(a);
        b = find(b);
        if(a ^ b)   
        {
            if(size[a] > size[b])   swap(a,b);
            size[b] += size[a];
            par[a] = b;
            return true;
        }
        else
            return false;
    }
};
int main()
{
    int t=1;  //cin>>t;
    while(t--)
    {
        int n , m1 , m2;    cin>>n>>m1>>m2;
        DSU adsu(n) , bdsu(n);
        for(int i=0;i<m1;i++)
        {
            int a,b;    
            cin>>a>>b;  adsu.merge(a , b);
        }
        for(int i=0;i<m2;i++)
        {
            int a,b;    cin>>a>>b;  bdsu.merge(a,b);
        }
        vector<pair<int , int>> res;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                int a , b , c,d;
                a = adsu.find(i);   b = adsu.find(j);
                c = bdsu.find(i);   d = bdsu.find(j);
                if((a^b) && (c^d))
                {
                    adsu.merge(a,b);    bdsu.merge(c,d);    res.push_back({i , j});
                }
            }
        }
        cout<<res.size()<<"\n";
        for(auto i:res) cout<<i.first<< " "<<i.second<<"\n";
    }
    return 0;
}